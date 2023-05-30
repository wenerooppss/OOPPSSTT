#include <gui/screen1_screen/Screen1View.hpp>
#include "math.h"
#include "control_box.h"
#define max(x,y) ( x>y?x:y )
#define min(x,y) ( x<y?x:y )

extern "C"
{	
	uint32_t CCTcheckFinalCal(uint8_t Levels[]){	
			uint32_t sore = 0x00000|(Levels[4]<<16)|(Levels[3])<<12|(Levels[2]<<8)|(Levels[1]<<4)|(Levels[0]);
		return 0x00000|(Levels[4]<<16)|(Levels[3])<<12|(Levels[2]<<8)|(Levels[1]<<4)|(Levels[0]);
	}
	uint64_t CCTcalVarition (uint8_t GFXKeys, uint8_t Levels[]){ //其他按键对应的值加进去？
		switch ((GFXKeys&0xF0)>>4){
			case 0x00:
				return CCTcheckFinalCal(Levels);
			case 0x01://knob1左移
//				Levels[MenuLevel] += (-1)*min((GFXKeys&0x0F),Levels[MenuLevel]);
//				return CCTcheckFinalCal(Levels);
			  return 0x01;
			case 0x02://knob1右移
//				Levels[MenuLevel] += (GFXKeys&0x0F);
//			  Levels[MenuLevel] = min(max(Levels[MenuLevel],0),5);
//				return CCTcheckFinalCal(Levels);
			  return 0x02;
			
			case 0x03://knob2左移
				return 0x03;
			
			case 0x04://knob2右移
				return 0x04;
			
			case 0x07://key menu is pressed
//				Levels[0]=0;
//				MenuLevel=0;
				return 0x0000c;//go to menu c只是数值 eg c d e 返回的还是menu0x00000.
			
			case 0x09://key effect is pressed
//				Levels[0]=0;
				return 0x0000e;
		  case 0x0a://key back 
				return 0x0000c;//go to menu
		}
	}
}
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    
	Temperature_count=presenter->getTemperature();//刷新新界面，用指针presenter 读取记录好的数值
	Light_count=presenter->getLight();	

    //通配符显示
  Unicode::snprintf(LightTextPgBuffer, LIGHTTEXTPG_SIZE, "%d", Light_count);
	Unicode::snprintf(TemperatureTextPgBuffer, TEMPERATURETEXTPG_SIZE, "%d", Temperature_count);
	 //进度器显示
	 LightingProgress.setValue(Light_count);
   TemperatureProgress.setValue(Temperature_count);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();//离开此界面，用指针presenter 保存修改的数值
	
	  presenter->saveLight(Light_count);
	  presenter->saveTemperature(Temperature_count);
}

void Screen1View::handleKeyEvent(uint8_t key)
{
	ScreenMenuNumberGFX = CCTcalVarition(key,GFXLevels);	

     switch (ScreenMenuNumberGFX) 
   { 
			 case 0x01:
				 LightDown();
			 break;			 
			 case 0x02:
				 LightUp();
			 break;
			 
			 case 0x03:
				 TemperatureDown();
			 break;
			 case 0x04:
				 TemperatureUp();
			 break;
			 
			 case 0x0000c://key:menu back
				 application().gotoScreenMenuScreenNoTransition();
			 break;
			 case 0x0000e://key effect
				 application().gotoScreenEffectScreenNoTransition();
			 break;
		 			 
		default:
		break;
	 }
 }

void Screen1View::LightDown()
{   
	   Light_count--;
	   Light_count=max(Light_count,0);
     touchgfx_printf("Light_count %d\r\n", Light_count);//打印数据
     LightingProgress.setValue(Light_count);//给进度条设置亮度的值
     LightingProgress.invalidate(); //更新显示进度条的值
    //通配符显示
    Unicode::snprintf(LightTextPgBuffer, LIGHTTEXTPG_SIZE, "%d", Light_count);
	  LightTextPg.invalidate();//更新显示		
	
//     LightingTextPg.updateValue(Light_count, 1000);
//     LightingTextPg.invalidate(); //文本进度条
}
void Screen1View::LightUp()
{
	   Light_count++;
	   Light_count=min(Light_count,100);
     touchgfx_printf("Light_count %d\r\n", Light_count);//打印数据
     LightingProgress.setValue(Light_count);//给进度条设置亮度的值
     LightingProgress.invalidate(); //更新显示进度条的值
    //通配符显示
    Unicode::snprintf(LightTextPgBuffer, LIGHTTEXTPG_SIZE, "%d", Light_count);
	  LightTextPg.invalidate();//更新显示	
//     LightingTextPg.updateValue(Light_count, 1000);
//     LightingTextPg.invalidate(); //文本进度条	
}
void Screen1View::TemperatureDown()
{
	   Temperature_count-= 50;
     Temperature_count=max(Temperature_count,2700);
	  touchgfx_printf("Temperature_count %ld \r\n", Temperature_count);//打印数据
    TemperatureProgress.setValue(Temperature_count);//给进度条设置色温的值
    TemperatureProgress.invalidate(); //更新显示半环进度条的值

    //通配符显示
    Unicode::snprintf(TemperatureTextPgBuffer, TEMPERATURETEXTPG_SIZE, "%d", Temperature_count);
	  TemperatureTextPg.invalidate();//更新显示
}
void Screen1View::TemperatureUp()
{
	   Temperature_count+= 50;
     Temperature_count=min(Temperature_count,6500);
	  touchgfx_printf("Temperature_count %ld \r\n", Temperature_count);//打印数据
    TemperatureProgress.setValue(Temperature_count);//给进度条设置色温的值
    TemperatureProgress.invalidate(); //更新显示半环进度条的值

    //通配符显示
    Unicode::snprintf(TemperatureTextPgBuffer, TEMPERATURETEXTPG_SIZE, "%d", Temperature_count);
	  TemperatureTextPg.invalidate();//更新显示
}