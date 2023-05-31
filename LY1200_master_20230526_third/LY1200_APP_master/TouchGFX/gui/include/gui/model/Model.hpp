#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

		//通过模型保存和检索数据，将受保护的值(温度亮度频率）添加到模型，添加公共函数访问此值
		void saveTemperature(int saveTemperature)
		{
			Temperature_count = saveTemperature;
		}
		void saveLight(int saveLight)
		{
			Light_count=saveLight;
		}	
		void saveFrequency(int saveFrequency)
		{
			Frequency_count=saveFrequency;
		}

		int getTemperature()
		{
			return Temperature_count;
		}
		int  getLight()
		{
			return Light_count;
		}
		int getFrequency()
		{
			return Frequency_count;
		}
		//以上代码：数值得以保存于模型中，在屏幕切换时也可以保存它们
		
		
		    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
		
protected:
    ModelListener* modelListener;
    int  Light_count;//
    int Temperature_count;
    int Frequency_count;
};

#endif // MODEL_HPP
