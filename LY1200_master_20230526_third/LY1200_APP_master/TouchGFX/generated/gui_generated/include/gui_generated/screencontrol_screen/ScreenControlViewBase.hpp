/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENCONTROLVIEWBASE_HPP
#define SCREENCONTROLVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screencontrol_screen/ScreenControlPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Image.hpp>

class ScreenControlViewBase : public touchgfx::View<ScreenControlPresenter>
{
public:
    ScreenControlViewBase();
    virtual ~ScreenControlViewBase();
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
    touchgfx::BoxWithBorder box_0;
    touchgfx::BoxWithBorder box_1;
    touchgfx::Image image1;
    touchgfx::Image image1_1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea2_1;

private:

};

#endif // SCREENCONTROLVIEWBASE_HPP
