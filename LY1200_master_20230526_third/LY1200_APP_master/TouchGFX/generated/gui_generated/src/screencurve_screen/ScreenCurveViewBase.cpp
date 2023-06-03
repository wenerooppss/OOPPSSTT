/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screencurve_screen/ScreenCurveViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

ScreenCurveViewBase::ScreenCurveViewBase()
{
    __background.setPosition(0, 0, 480, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    add(box1);

    textArea1.setXY(138, 20);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T7S8));
    add(textArea1);

    box_0.setPosition(106, 90, 64, 64);
    box_0.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    box_0.setBorderColor(touchgfx::Color::getColorFromRGB(0, 179, 255));
    box_0.setBorderSize(5);
    box_0.setVisible(false);
    add(box_0);

    box_1.setPosition(299, 90, 64, 64);
    box_1.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    box_1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 179, 255));
    box_1.setBorderSize(5);
    box_1.setVisible(false);
    add(box_1);

    box_2.setPosition(106, 197, 64, 64);
    box_2.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    box_2.setBorderColor(touchgfx::Color::getColorFromRGB(0, 179, 255));
    box_2.setBorderSize(5);
    box_2.setVisible(false);
    add(box_2);

    box_3.setPosition(299, 197, 64, 64);
    box_3.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    box_3.setBorderColor(touchgfx::Color::getColorFromRGB(0, 179, 255));
    box_3.setBorderSize(5);
    box_3.setVisible(false);
    add(box_3);

    textArea2.setXY(76, 160);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_J594));
    add(textArea2);

    textArea2_2.setXY(63, 275);
    textArea2_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_2.setLinespacing(0);
    textArea2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PS7J));
    add(textArea2_2);

    textArea2_3.setXY(263, 275);
    textArea2_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_3.setLinespacing(0);
    textArea2_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H6ZA));
    add(textArea2_3);

    textArea2_1.setXY(288, 160);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_I4E0));
    add(textArea2_1);

    image_0.setXY(106, 90);
    image_0.setBitmap(touchgfx::Bitmap(BITMAP_CURVE_ID));
    add(image_0);

    image_1.setXY(299, 90);
    image_1.setBitmap(touchgfx::Bitmap(BITMAP_CURVE_ID));
    add(image_1);

    image_2.setXY(106, 197);
    image_2.setBitmap(touchgfx::Bitmap(BITMAP_CURVE_ID));
    add(image_2);

    image_3.setXY(299, 197);
    image_3.setBitmap(touchgfx::Bitmap(BITMAP_CURVE_ID));
    add(image_3);
}

ScreenCurveViewBase::~ScreenCurveViewBase()
{

}

void ScreenCurveViewBase::setupScreen()
{

}
