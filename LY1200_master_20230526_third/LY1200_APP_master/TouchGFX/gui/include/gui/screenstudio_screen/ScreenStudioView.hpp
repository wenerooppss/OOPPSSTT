#ifndef SCREENSTUDIOVIEW_HPP
#define SCREENSTUDIOVIEW_HPP

#include <gui_generated/screenstudio_screen/ScreenStudioViewBase.hpp>
#include <gui/screenstudio_screen/ScreenStudioPresenter.hpp>

class ScreenStudioView : public ScreenStudioViewBase
{
public:
    ScreenStudioView();
    virtual ~ScreenStudioView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENSTUDIOVIEW_HPP
