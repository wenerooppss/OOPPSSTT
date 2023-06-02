#ifndef SCREENEFFECTSETPRESENTER_HPP
#define SCREENEFFECTSETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenEffectSetView;

class ScreenEffectSetPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenEffectSetPresenter(ScreenEffectSetView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
//m要通过p与v联系
    //从视图访问模型中的数据，加载保存模型中的数据
    void saveTemperature(int Temperature_count)
		{
			model->saveTemperature(Temperature_count);
		}
		
		void saveLight(int Light_count)
		{
			 model->saveLight(Light_count);
		}
		
		
		int getTemperature()
		{
		  return model->getTemperature();
		}
		int getLight()
		{
			return model->getLight();
		}
		
		
		void saveFrequency(int Frequency_count)
		{
			 model->saveFrequency(Frequency_count);
		}
		
		int getFrequency()
		{
		  return model->getFrequency();
		}

    virtual ~ScreenEffectSetPresenter() {};

private:
    ScreenEffectSetPresenter();

    ScreenEffectSetView& view;
};

#endif // SCREENEFFECTSETPRESENTER_HPP
