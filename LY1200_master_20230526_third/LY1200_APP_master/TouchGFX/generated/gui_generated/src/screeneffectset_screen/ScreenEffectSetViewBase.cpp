/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screeneffectset_screen/ScreenEffectSetViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

ScreenEffectSetViewBase::ScreenEffectSetViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(41, 36, 36));
    add(box1);

    textArea1.setXY(107, 23);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FW90));
    add(textArea1);

    textArea1_2.setXY(20, 251);
    textArea1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OWEB));
    add(textArea1_2);

    textArea1_1.setXY(337, 23);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RC5J));
    add(textArea1_1);

    LightingProgress.setXY(29, 55);
    LightingProgress.setProgressIndicatorPosition(0, 0, 190, 190);
    LightingProgress.setRange(0, 100, 100, 0);
    LightingProgress.setCenter(95, 95);
    LightingProgress.setRadius(85);
    LightingProgress.setLineWidth(20);
    LightingProgress.setStartEndAngle(0, 360);
    LightingProgress.setCapPrecision(180);
    LightingProgress.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_CIRCLEPROGRESS_BACKGROUNDS_LARGE_ID));
    LightingProgressPainter.setColor(touchgfx::Color::getColorFromRGB(149, 225, 230));
    LightingProgress.setPainter(LightingProgressPainter);
    LightingProgress.setValue(15);
    add(LightingProgress);

    LightTextPg.setXY(95, 140);
    LightTextPg.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    LightTextPg.setLinespacing(0);
    Unicode::snprintf(LightTextPgBuffer, LIGHTTEXTPG_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_QXLY).getText());
    LightTextPg.setWildcard(LightTextPgBuffer);
    LightTextPg.resizeToCurrentText();
    LightTextPg.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XH30));
    add(LightTextPg);

    TemperatureProgress.setXY(262, 66);
    TemperatureProgress.setProgressIndicatorPosition(0, 0, 184, 94);
    TemperatureProgress.setRange(2700, 6500, 76, 0);
    TemperatureProgress.setCenter(91.8f, 92.8f);
    TemperatureProgress.setRadius(83);
    TemperatureProgress.setLineWidth(15.5f);
    TemperatureProgress.setStartEndAngle(-90, 90);
    TemperatureProgress.setCapPrecision(180);
    TemperatureProgress.setBackground(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_BG_LARGE_CIRCLE_INDICATOR_BG_LINE_HALF_ID));
    TemperatureProgressPainter.setColor(touchgfx::Color::getColorFromRGB(219, 185, 31));
    TemperatureProgress.setPainter(TemperatureProgressPainter);
    TemperatureProgress.setValue(2700);
    add(TemperatureProgress);

    TemperatureTextPg.setXY(325, 140);
    TemperatureTextPg.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TemperatureTextPg.setLinespacing(0);
    Unicode::snprintf(TemperatureTextPgBuffer, TEMPERATURETEXTPG_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_WUUG).getText());
    TemperatureTextPg.setWildcard(TemperatureTextPgBuffer);
    TemperatureTextPg.resizeToCurrentText();
    TemperatureTextPg.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0ILK));
    add(TemperatureTextPg);

    box2.setPosition(35, 282, 410, 20);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    box2.setVisible(false);
    add(box2);

    FrequencyProgress.setXY(41, 287);
    FrequencyProgress.setProgressIndicatorPosition(0, 0, 400, 10);
    FrequencyProgress.setRange(0, 10, 10, 0);
    FrequencyProgress.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    FrequencyProgress.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_IMAGEPROGRESS_PLAIN_NORMAL_LARGE_ID));
    FrequencyProgress.setBitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_IMAGEPROGRESS_PLAIN_NORMAL_LARGE_ACTIVE_ID);
    FrequencyProgress.setValue(1);
    FrequencyProgress.setAnchorAtZero(true);
    add(FrequencyProgress);
}

ScreenEffectSetViewBase::~ScreenEffectSetViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void ScreenEffectSetViewBase::setupScreen()
{

}
