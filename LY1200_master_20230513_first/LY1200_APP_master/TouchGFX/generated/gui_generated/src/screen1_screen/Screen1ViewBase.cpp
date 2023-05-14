/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    __background.setPosition(0, 0, 480, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(135, 84, 84));
    add(box1);

    image1.setXY(185, 93);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_LOGOS_TOUCHGFX_ID));
    add(image1);

    box2.setPosition(70, 114, 50, 50);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box2);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::handleKeyEvent(uint8_t key)
{
    if(3 == key)
    {
        //Interaction1
        //When hardware button 3 clicked change screen to ScreenMenu
        //Go to ScreenMenu with no screen transition
        application().gotoScreenMenuScreenNoTransition();
    
    }

    if(1 == key)
    {
        //Interaction2
        //When hardware button 1 clicked hide box2
        //Hide box2
        box2.setVisible(false);
        box2.invalidate();
    
    }
}
