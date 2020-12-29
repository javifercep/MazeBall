#include <gui/startscreen_screen/startscreenView.hpp>
#include <gui/startscreen_screen/startscreenPresenter.hpp>

startscreenPresenter::startscreenPresenter(startscreenView& v)
    : view(v)
{

}

void startscreenPresenter::activate()
{

}

void startscreenPresenter::deactivate()
{

}

void startscreenPresenter::notifyIMUXchange(int16_t i16x)
{
    this->view.MoveBall();
}

void startscreenPresenter::notifyIMUYchange(int16_t i16x)
{

}
