/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENMENUVIEWBASE_HPP
#define SCREENMENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenmenu_screen/ScreenMenuPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Image.hpp>

class ScreenMenuViewBase : public touchgfx::View<ScreenMenuPresenter>
{
public:
    ScreenMenuViewBase();
    virtual ~ScreenMenuViewBase();
    virtual void setupScreen();

    /*
     * Custom Actions
     */
    virtual void action1()
    {
        // Override and implement this function in Screen1
    }
    

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
    touchgfx::BoxWithBorder box_2;
    touchgfx::BoxWithBorder box_3;
    touchgfx::BoxWithBorder box_4;
    touchgfx::BoxWithBorder box_5;
    touchgfx::Image image_0;
    touchgfx::Image image_1;
    touchgfx::Image image_2;
    touchgfx::Image image_3;
    touchgfx::Image image_4;
    touchgfx::Image image_5;

private:

};

#endif // SCREENMENUVIEWBASE_HPP
