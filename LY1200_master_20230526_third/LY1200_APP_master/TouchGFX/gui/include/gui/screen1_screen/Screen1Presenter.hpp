#ifndef SCREEN1PRESENTER_HPP
#define SCREEN1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen1View;

class Screen1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
	 Screen1Presenter(Screen1View& v);//构造函数以view指针为入参

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
		
		
		

    virtual ~Screen1Presenter() {};

private:
    Screen1Presenter();

    Screen1View& view;
};

#endif // SCREEN1PRESENTER_HPP
