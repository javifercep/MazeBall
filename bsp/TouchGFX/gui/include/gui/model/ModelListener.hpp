#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void notifyIMUXchange(int16_t i16x){}
    virtual void notifyIMUYchange(int16_t i16x){}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
