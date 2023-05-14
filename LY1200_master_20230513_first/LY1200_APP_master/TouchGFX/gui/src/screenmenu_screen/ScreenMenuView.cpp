#include <gui/screenmenu_screen/ScreenMenuView.hpp>
#include "math.h"

ScreenMenuView::ScreenMenuView()
{

}

void ScreenMenuView::setupScreen()
{
    ScreenMenuViewBase::setupScreen();
}

void ScreenMenuView::tearDownScreen()
{
    ScreenMenuViewBase::tearDownScreen();
}
void ScreenMenuView::handleKeyEvent(uint8_t key)
{
	//if(key<10){key= min(max(0,key),9)}
	
     switch (key)
   {
    case 0://BOX
        box_0.setVisible(true);
        box_0.invalidate();
		break;
    case 1:
			  //Hide box Show box
        box_0.setVisible(false);
        box_0.invalidate();
        box_1.setVisible(true);
        box_1.invalidate();
		break;
    case 2:
        box_1.setVisible(false);
        box_1.invalidate();
        box_2.setVisible(true);
        box_2.invalidate();
		break;
    case 3:
        box_2.setVisible(false);
        box_2.invalidate();
        box_3.setVisible(true);
        box_3.invalidate();
		break;
    case 4:
        box_3.setVisible(false);
        box_3.invalidate();			
        box_4.setVisible(true);
        box_4.invalidate();
		break;
    case 5:	
		case 6:	
	  
        box_4.setVisible(false);
        box_4.invalidate();		
        box_5.setVisible(true);
        box_5.invalidate();
		break;
		default:
			break;
	}
}
