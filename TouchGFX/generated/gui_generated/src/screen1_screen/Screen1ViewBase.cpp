/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_GLASS_THEME_IMAGES_BACKGROUNDS_480X272_GRADIENT_WAVES_ID));
    add(image1);

    buttonWithLabelC.setXY(0, 196);
    buttonWithLabelC.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelC.setLabelText(touchgfx::TypedText(T___SINGLEUSE_WG4R));
    buttonWithLabelC.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelC.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelC.setAction(buttonCallback);
    add(buttonWithLabelC);

    buttonWithLabelCIS.setXY(35, 126);
    buttonWithLabelCIS.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelCIS.setLabelText(touchgfx::TypedText(T___SINGLEUSE_3J5X));
    buttonWithLabelCIS.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelCIS.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelCIS.setAction(buttonCallback);
    add(buttonWithLabelCIS);

    buttonWithLabelDIS.setXY(105, 126);
    buttonWithLabelDIS.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelDIS.setLabelText(touchgfx::TypedText(T___SINGLEUSE_H267));
    buttonWithLabelDIS.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelDIS.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelDIS.setAction(buttonCallback);
    add(buttonWithLabelDIS);

    buttonWithLabelFIS.setXY(245, 126);
    buttonWithLabelFIS.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelFIS.setLabelText(touchgfx::TypedText(T___SINGLEUSE_AF6D));
    buttonWithLabelFIS.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelFIS.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelFIS.setAction(buttonCallback);
    add(buttonWithLabelFIS);

    buttonWithLabelGIS.setXY(315, 126);
    buttonWithLabelGIS.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelGIS.setLabelText(touchgfx::TypedText(T___SINGLEUSE_EITA));
    buttonWithLabelGIS.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelGIS.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelGIS.setAction(buttonCallback);
    add(buttonWithLabelGIS);

    buttonWithLabelAIS.setXY(385, 126);
    buttonWithLabelAIS.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelAIS.setLabelText(touchgfx::TypedText(T___SINGLEUSE_FYJM));
    buttonWithLabelAIS.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelAIS.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelAIS.setAction(buttonCallback);
    add(buttonWithLabelAIS);

    buttonWithLabelD.setXY(70, 196);
    buttonWithLabelD.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelD.setLabelText(touchgfx::TypedText(T___SINGLEUSE_DJI7));
    buttonWithLabelD.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelD.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelD.setAction(buttonCallback);
    add(buttonWithLabelD);

    buttonWithLabelE.setXY(140, 196);
    buttonWithLabelE.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelE.setLabelText(touchgfx::TypedText(T___SINGLEUSE_T7GR));
    buttonWithLabelE.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelE.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelE.setAction(buttonCallback);
    add(buttonWithLabelE);

    buttonWithLabelF.setXY(210, 196);
    buttonWithLabelF.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelF.setLabelText(touchgfx::TypedText(T___SINGLEUSE_61BY));
    buttonWithLabelF.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelF.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelF.setAction(buttonCallback);
    add(buttonWithLabelF);

    buttonWithLabelG.setXY(280, 196);
    buttonWithLabelG.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelG.setLabelText(touchgfx::TypedText(T___SINGLEUSE_MOIA));
    buttonWithLabelG.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelG.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelG.setAction(buttonCallback);
    add(buttonWithLabelG);

    buttonWithLabelH.setXY(420, 196);
    buttonWithLabelH.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelH.setLabelText(touchgfx::TypedText(T___SINGLEUSE_80FP));
    buttonWithLabelH.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelH.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelH.setAction(buttonCallback);
    add(buttonWithLabelH);

    buttonWithLabelA.setXY(350, 196);
    buttonWithLabelA.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_PRESSED_ID));
    buttonWithLabelA.setLabelText(touchgfx::TypedText(T___SINGLEUSE_XQGR));
    buttonWithLabelA.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelA.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelA.setAction(buttonCallback);
    add(buttonWithLabelA);

    buttonRIGHT.setXY(409, 28);
    buttonRIGHT.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_FORWARD_50_50_FFFFFF_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_FORWARD_IOS_50_50_FFFFFF_SVG_ID));
    buttonRIGHT.setIconXY(-7, -7);
    buttonRIGHT.setAction(buttonCallback);
    add(buttonRIGHT);

    buttonLEFT.setXY(35, 28);
    buttonLEFT.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_BACK_50_50_FFFFFF_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_BACK_IOS_50_50_FFFFFF_SVG_ID));
    buttonLEFT.setIconXY(-7, -7);
    buttonLEFT.setAction(buttonCallback);
    add(buttonLEFT);

    textArea1.setXY(228, 22);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 209, 59));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_A25W).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AGBD));
    add(textArea1);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabelC)
    {
        //Interaction0
        //When buttonWithLabelC clicked call virtual function
        //Call playC
        playC();
    }
    if (&src == &buttonWithLabelCIS)
    {
        //Interaction1
        //When buttonWithLabelCIS clicked call virtual function
        //Call playCIS
        playCIS();
    }
    if (&src == &buttonWithLabelD)
    {
        //Interaction2
        //When buttonWithLabelD clicked call virtual function
        //Call playD
        playD();
    }
    if (&src == &buttonWithLabelDIS)
    {
        //Interaction3
        //When buttonWithLabelDIS clicked call virtual function
        //Call playDIS
        playDIS();
    }
    if (&src == &buttonWithLabelE)
    {
        //Interaction4
        //When buttonWithLabelE clicked call virtual function
        //Call playE
        playE();
    }
    if (&src == &buttonWithLabelF)
    {
        //Interaction5
        //When buttonWithLabelF clicked call virtual function
        //Call playF
        playF();
    }
    if (&src == &buttonWithLabelFIS)
    {
        //Interaction6
        //When buttonWithLabelFIS clicked call virtual function
        //Call playFIS
        playFIS();
    }
    if (&src == &buttonWithLabelG)
    {
        //Interaction7
        //When buttonWithLabelG clicked call virtual function
        //Call playG
        playG();
    }
    if (&src == &buttonWithLabelGIS)
    {
        //Interaction8
        //When buttonWithLabelGIS clicked call virtual function
        //Call playGIS
        playGIS();
    }
    if (&src == &buttonWithLabelA)
    {
        //Interaction9
        //When buttonWithLabelA clicked call virtual function
        //Call playA
        playA();
    }
    if (&src == &buttonWithLabelAIS)
    {
        //Interaction10
        //When buttonWithLabelAIS clicked call virtual function
        //Call playAIS
        playAIS();
    }
    if (&src == &buttonWithLabelH)
    {
        //Interaction11
        //When buttonWithLabelH clicked call virtual function
        //Call playH
        playH();
    }
    if (&src == &buttonLEFT)
    {
        //LEFT
        //When buttonLEFT clicked call virtual function
        //Call functionLEFT
        functionLEFT();
    }
    if (&src == &buttonRIGHT)
    {
        //RIGHT
        //When buttonRIGHT clicked call virtual function
        //Call functionRIGHT
        functionRIGHT();
    }
}