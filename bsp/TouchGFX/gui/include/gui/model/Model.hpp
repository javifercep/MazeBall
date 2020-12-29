#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    int16_t getIMUX(void){return 0;}
    int16_t getIMUY(void){return 0;}
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
