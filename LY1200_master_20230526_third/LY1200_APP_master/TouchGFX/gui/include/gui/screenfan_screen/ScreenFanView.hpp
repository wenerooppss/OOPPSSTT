#ifndef SCREENFANVIEW_HPP
#define SCREENFANVIEW_HPP

#include <gui_generated/screenfan_screen/ScreenFanViewBase.hpp>
#include <gui/screenfan_screen/ScreenFanPresenter.hpp>

class ScreenFanView : public ScreenFanViewBase
{
public:
    ScreenFanView();
    virtual ~ScreenFanView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENFANVIEW_HPP
