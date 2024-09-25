#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void playC();
    virtual void playCIS();
    virtual void playD();
    virtual void playDIS();
    virtual void playE();
    virtual void playF();
    virtual void playFIS();
    virtual void playG();
    virtual void playGIS();
    virtual void playA();
    virtual void playAIS();
    virtual void playH();
    virtual void playNone();
    virtual void functionRIGHT();
    virtual void functionLEFT();
    virtual void updateCount(int counter);
protected:
};

#endif // SCREEN1VIEW_HPP
