#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "system_data.h"
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

Model::Model() : modelListener(0),Light_count(15),Temperature_count(2700),Frequency_count(1)
{

}

extern osMessageQueueId_t sysDataQueue_AppHandle;
void Model::tick()
{
// if(modelListener !=0)
// {
//	 modelListener->Temperature_count(getTemperature());
// }
	struct SYS_DATA sys_Data_getQueue;
			//获取消息
	if(osMessageQueueGet(sysDataQueue_AppHandle, (void *)&sys_Data_getQueue,NULL,portMAX_DELAY)==osOK)
	{ //获取消息成功
		sys_Data_getQueue.cct_Parament.brightness = (getLight()/100.0);
		sys_Data_getQueue.cct_Parament.color_Temperature = getTemperature();
	}
	
	//放入消息 
	if(osMessageQueuePut(sysDataQueue_AppHandle, &sys_Data_getQueue,0,portMAX_DELAY)==osOK)
	{ //放入消息成功
		
	}
	
}

