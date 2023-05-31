#ifndef SCREENUPDATEVIEW_HPP
#define SCREENUPDATEVIEW_HPP

#include <gui_generated/screenupdate_screen/ScreenUpdateViewBase.hpp>
#include <gui/screenupdate_screen/ScreenUpdatePresenter.hpp>

class ScreenUpdateView : public ScreenUpdateViewBase
{
public:
    ScreenUpdateView();
    virtual ~ScreenUpdateView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENUPDATEVIEW_HPP
