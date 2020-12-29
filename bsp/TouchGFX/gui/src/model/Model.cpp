#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
    if (modelListener != 0)
    {
      modelListener->notifyIMUXchange(0);
      modelListener->notifyIMUYchange(0);
    }
}

