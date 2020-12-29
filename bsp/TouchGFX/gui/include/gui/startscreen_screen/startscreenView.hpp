#ifndef STARTSCREENVIEW_HPP
#define STARTSCREENVIEW_HPP

#include <gui_generated/startscreen_screen/startscreenViewBase.hpp>
#include <gui/startscreen_screen/startscreenPresenter.hpp>

class startscreenView : public startscreenViewBase
{
public:
    startscreenView();
    virtual ~startscreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void MoveBall();
protected:
};

#endif // STARTSCREENVIEW_HPP
