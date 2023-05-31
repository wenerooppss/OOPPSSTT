#ifndef SCREENBLUETOOTHVIEW_HPP
#define SCREENBLUETOOTHVIEW_HPP

#include <gui_generated/screenbluetooth_screen/ScreenBluetoothViewBase.hpp>
#include <gui/screenbluetooth_screen/ScreenBluetoothPresenter.hpp>

class ScreenBluetoothView : public ScreenBluetoothViewBase
{
public:
    ScreenBluetoothView();
    virtual ~ScreenBluetoothView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENBLUETOOTHVIEW_HPP
