#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0),Light_count(15),Temperature_count(2700),Frequency_count(1)
{

}

void Model::tick()
{
// if(modelListener !=0)
// {
//	 modelListener->Temperature_count(getTemperature());
// }
	
	//ִ执行传入“新数据”事件的实际采样
}
