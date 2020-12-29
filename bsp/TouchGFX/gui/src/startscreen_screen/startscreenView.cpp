#include <gui/startscreen_screen/startscreenView.hpp>

startscreenView::startscreenView()
{

}

void startscreenView::setupScreen()
{
    startscreenViewBase::setupScreen();
}

void startscreenView::tearDownScreen()
{
    startscreenViewBase::tearDownScreen();
}

void startscreenView::MoveBall()
{
    int radius;
    this->ball.getRadius(radius);

    radius++;
    if (radius > 20)
    {
        radius = 5;
    }
    this->ball.setRadius(radius);
    this->ball.invalidate();

}
