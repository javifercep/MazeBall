#ifndef STARTSCREENPRESENTER_HPP
#define STARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class startscreenView;

class startscreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    startscreenPresenter(startscreenView& v);

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

    virtual ~startscreenPresenter() {};

    // override the empty function.
    virtual void notifyIMUXchange(int16_t i16x);
    virtual void notifyIMUYchange(int16_t i16x);

private:
    startscreenPresenter();

    startscreenView& view;
};

#endif // STARTSCREENPRESENTER_HPP
