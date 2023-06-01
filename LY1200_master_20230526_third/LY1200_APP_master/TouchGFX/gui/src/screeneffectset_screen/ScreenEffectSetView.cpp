#include <gui/screeneffectset_screen/ScreenEffectSetView.hpp>
#include "math.h"
#include "control_box.h"
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)

extern "C"
{
	uint32_t EffSetcheckFinalCal(uint8_t Levels[]){	
			uint32_t sore = 0x00000|(Levels[4]<<16)|(Levels[3])<<12|(Levels[2]<<8)|(Levels[1]<<4)|(Levels[0]);
		return 0x00000|(Levels[4]<<16)|(Levels[3])<<12|(Levels[2]<<8)|(Levels[1]<<4)|(Levels[0]);
	}
	uint64_t EffSetcalVarition (uint8_t GFXKeys, uint8_t Levels[]){ //按键对应的值
	
		switch ((GFXKeys&0xF0)>>4){
			case 0x00:
				return EffSetcheckFinalCal(Levels);
			
			case 0x01://knob1左移
//        Levels[1]=2;//作为标志位
			  return 0x00020;
			
			case 0x02://knob1右移
//        Levels[1]=3;//作为标志位
			  return 0x00030;				

			
			case 0x03://knob2左移
//        Levels[1]=4;//作为标志位
			  return 0x00040;			
			case 0x04://knob2右移
//        Levels[1]=5;//作为标志位
			  return 0x00050;	
			
////			case 0x05://knob2 pressed 去调节频率
////			  Levels[0]=0;
////				Levels[MenuLevel+1] = 1; //数组 下一个为1
////			  MenuLevel+=1;//层级加1
////				return EffSetcheckFinalCal(Levels);
			
			case 0x07://key menu is pressed
				Levels[0]=0;
			  Levels[1]=0;
				MenuLevel=0;
				return 0x0000c;//go to menu c只是数值 eg c d e 返回数组还是menu0x00000.
			
			case 0x09://key effect is pressed
				Levels[0]=0;
			  Levels[1]=0;
				MenuLevel=0;//等同back键 pressed 0x00000.			
				return 0x0000e;
			
		  case 0x0a://key back 
				Levels[0]=0;
				Levels[MenuLevel]=0;
			  MenuLevel-=1;		
			  return EffSetcheckFinalCal(Levels);//0x00000.0x00010
			default:
				return EffSetcheckFinalCal(Levels) ;
		}
	}
}

ScreenEffectSetView::ScreenEffectSetView()
{

}

void ScreenEffectSetView::setupScreen()
{
    ScreenEffectSetViewBase::setupScreen();
		Temperature_count=presenter->getTemperature();//刷新新界面，用指针presenter 读取记录好的数值
	  Light_count=presenter->getLight();	
	  Frequency_count=presenter->getFrequency();

    //通配符显示
  Unicode::snprintf(LightTextPgBuffer, LIGHTTEXTPG_SIZE, "%d", Light_count);
	Unicode::snprintf(TemperatureTextPgBuffer, TEMPERATURETEXTPG_SIZE, "%d", Temperature_count);
	 //进度器显示
	 LightingProgress.setValue(Light_count);
   TemperatureProgress.setValue(Temperature_count);
	 FrequencyProgress.setValue(Frequency_count);
}

void ScreenEffectSetView::tearDownScreen()
{
    ScreenEffectSetViewBase::tearDownScreen();
		
	  presenter->saveLight(Light_count);
	  presenter->saveTemperature(Temperature_count);
	  presenter->saveFrequency(Frequency_count);
}

void ScreenEffectSetView::handleKeyEvent(uint8_t key)
{
	ScreenMenuNumberGFX = EffSetcalVarition(key,GFXLevels);	

     switch (ScreenMenuNumberGFX) 
   { 
			 case 0x00020:
				 LightDown();
			 break;			 
			 case 0x00030:
				 LightUp();
			 break;
			 
			 case 0x00040:
				 TemperatureDown();
			 break;
			 case 0x00050:
				 TemperatureUp();
			 break;
			 
////			 case 0x00110:
////				box2.setVisible(true);
////        box2.invalidate();//show box
			 
////			 case 0x00010:
////				box2.setVisible(false);
////        box2.invalidate();				 
//			 
//			 case 0x00140:
//				 FrequencyDown();
//			 break;
//			 case 0x00150:
//				FrequencyUp();
//			 break;
			 
			 
			 case 0x0000c://key:menu back
				 application().gotoScreenMenuScreenNoTransition();
			 break;
			 
			 case 0x00000:
			 case 0x0000e://key effect
				 application().gotoScreenEffectScreenNoTransition();
			 break;
		 			 
		default:
		break;
	 }
 }

void ScreenEffectSetView::LightDown()
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
void ScreenEffectSetView::LightUp()
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

void ScreenEffectSetView::TemperatureDown()
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
void ScreenEffectSetView::TemperatureUp()
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
void ScreenEffectSetView::FrequencyDown()
{
	   Frequency_count--;
     Frequency_count=max(Frequency_count,0);
	  touchgfx_printf("Frequency_count %ld \r\n", Frequency_count);//打印数据
    FrequencyProgress.setValue(Frequency_count);//给进度条设置值
    FrequencyProgress.invalidate(); //更新显示进度条的值
}
void ScreenEffectSetView::FrequencyUp()
{
	   Frequency_count++;
     Frequency_count=min(Frequency_count,10);
	  touchgfx_printf("Frequency_count %ld \r\n", Frequency_count);//打印数据
    FrequencyProgress.setValue(Frequency_count);//给进度条设置值
    FrequencyProgress.invalidate(); //更新显示进度条的值
}