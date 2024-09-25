#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::playC()
{
	presenter->sendNote(0);
}
void Screen1View::playCIS()
{
	presenter->sendNote(1);
}
void Screen1View::playD()
{
	presenter->sendNote(2);
}
void Screen1View::playDIS()
{
	presenter->sendNote(3);
}
void Screen1View::playE()
{
	presenter->sendNote(4);
}
void Screen1View::playF()
{
	presenter->sendNote(5);
}
void Screen1View::playFIS()
{
	presenter->sendNote(6);
}
void Screen1View::playG()
{
	presenter->sendNote(7);
}
void Screen1View::playGIS()
{
	presenter->sendNote(8);
}
void Screen1View::playA()
{
	presenter->sendNote(9);
}
void Screen1View::playAIS()
{
	presenter->sendNote(10);
}
void Screen1View::playH()
{
	presenter->sendNote(11);
}
void Screen1View::playNone()
{
	presenter->sendNote(12);
}
void Screen1View::functionRIGHT()
{
	presenter->sendState(2);
}
void Screen1View::functionLEFT()
{
	presenter->sendState(0);
}
void Screen1View::updateCount(int counter)
{
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", counter);
	textArea1.invalidate();
}


