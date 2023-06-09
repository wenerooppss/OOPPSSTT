/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENEFFECTSETVIEWBASE_HPP
#define SCREENEFFECTSETVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screeneffectset_screen/ScreenEffectSetPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/progress_indicators/ImageProgress.hpp>

class ScreenEffectSetViewBase : public touchgfx::View<ScreenEffectSetPresenter>
{
public:
    ScreenEffectSetViewBase();
    virtual ~ScreenEffectSetViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_1;
    touchgfx::CircleProgress LightingProgress;
    touchgfx::PainterRGB565 LightingProgressPainter;
    touchgfx::TextAreaWithOneWildcard LightTextPg;
    touchgfx::CircleProgress TemperatureProgress;
    touchgfx::PainterRGB565 TemperatureProgressPainter;
    touchgfx::TextAreaWithOneWildcard TemperatureTextPg;
    touchgfx::Box box2;
    touchgfx::ImageProgress FrequencyProgress;

    /*
     * Wildcard Buffers
     */
    static const uint16_t LIGHTTEXTPG_SIZE = 7;
    touchgfx::Unicode::UnicodeChar LightTextPgBuffer[LIGHTTEXTPG_SIZE];
    static const uint16_t TEMPERATURETEXTPG_SIZE = 6;
    touchgfx::Unicode::UnicodeChar TemperatureTextPgBuffer[TEMPERATURETEXTPG_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // SCREENEFFECTSETVIEWBASE_HPP
