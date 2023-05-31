#ifndef SCREENDMXVIEW_HPP
#define SCREENDMXVIEW_HPP

#include <gui_generated/screendmx_screen/ScreenDMXViewBase.hpp>
#include <gui/screendmx_screen/ScreenDMXPresenter.hpp>

class ScreenDMXView : public ScreenDMXViewBase
{
public:
    ScreenDMXView();
    virtual ~ScreenDMXView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENDMXVIEW_HPP
