#ifndef SCREENLANGUAGEVIEW_HPP
#define SCREENLANGUAGEVIEW_HPP

#include <gui_generated/screenlanguage_screen/ScreenLanguageViewBase.hpp>
#include <gui/screenlanguage_screen/ScreenLanguagePresenter.hpp>

class ScreenLanguageView : public ScreenLanguageViewBase
{
public:
    ScreenLanguageView();
    virtual ~ScreenLanguageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENLANGUAGEVIEW_HPP
