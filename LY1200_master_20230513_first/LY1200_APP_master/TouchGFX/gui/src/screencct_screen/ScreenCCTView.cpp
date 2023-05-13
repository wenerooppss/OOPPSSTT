#include <gui/screencct_screen/ScreenCCTView.hpp>
#include <images/BitmapDatabase.hpp>


ScreenCCTView::ScreenCCTView()
{

}

void ScreenCCTView::setupScreen()
{
    ScreenCCTViewBase::setupScreen();
	  //ensure background is cached
    //Bitmap::cache(BITMAP_ALTERNATE_THEME_IMAGES_LOGOS_TOUCHGFX_ID);
	  //Bitmap::cache(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_PUZZLE_ID);
    //cache some icons
//    Bitmap::cache(BITMAP_ICON10_ID);
//    Bitmap::cache(BITMAP_ICON11_ID);
//    Bitmap::cache(BITMAP_ICON12_ID);
}

void ScreenCCTView::tearDownScreen()
{
    ScreenCCTViewBase::tearDownScreen();
		//Bitmap::clearCache();
}

void ScreenCCTView::handleKeyEvent(uint8_t key)
{
    if(6 == key)
    {
        //Interaction1
        //When hardware button 2 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    
    }
}
