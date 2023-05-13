#ifndef SCREENCCTVIEW_HPP
#define SCREENCCTVIEW_HPP

#include <gui_generated/screencct_screen/ScreenCCTViewBase.hpp>
#include <gui/screencct_screen/ScreenCCTPresenter.hpp>

class ScreenCCTView : public ScreenCCTViewBase
{
public:
    ScreenCCTView();
    virtual ~ScreenCCTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleKeyEvent(uint8_t key);
			
protected:
};

#endif // SCREENCCTVIEW_HPP
