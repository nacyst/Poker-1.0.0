/*
  ==============================================================================

    Interface.h
    Created: 10 Oct 2017 2:01:26pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
#include "JuceHeader.h"
#include "backFront.h"
#include "findCard.h"

#include <string>


class Interface  : public Component,
                   public Slider::Listener,
                   public Button::Listener
{
public:
    Interface ();
    ~Interface();


    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void whoWin();
    void labelTxt(int liczba);
    void showMoney();
    static const char* cards_png;
    static const int cards_pngSize;
    static const char* tablePoker_jpg;
    static const int tablePoker_jpgSize;
    static const char* _22359445_744499265740935_1042817326_n_png;
    static const int _22359445_744499265740935_1042817326_n_pngSize;
    static const char* free_png;
    static const int free_pngSize;
    static const char* zastawa_jpg;
    static const int zastawa_jpgSize;
    static const char* start_png;
    static const int start_pngSize;
    static const char* continue_png;
    static const int continue_pngSize;
    static const char* help_png;
    static const int help_pngSize;
    static const char* poker_2_png;
    static const int poker_2_pngSize;
    static const char* help_2_png;
    static const int help_2_pngSize;
    static const char* continue_2_png;
    static const int continue_2_pngSize;
    static const char* comba_jpg;
    static const int comba_jpgSize;
    

private:
    cardsAll finder;
    cardsRazdacza flopCards;
    combination ocena;
    opredel findCard;

    ScopedPointer<Slider> slider;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<Label> label;
    ScopedPointer<TextButton> textButton3;
     ScopedPointer<TextButton> textButton4;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    Image cachedImage_tablePoker_jpg_1;
    Image cachedImage_cards_png_2;
    Image cachedImage_cards_png_3;
    Image cachedImage_cards_png_4;
    Image cachedImage_cards_png_5;
    Image cachedImage_cards_png_6;
    Image cachedImage__22359445_744499265740935_1042817326_n_png_7;
    Image cachedImage_cards_png_8;
    Image cachedImage__22359445_744499265740935_1042817326_n_png_9;
    Image cachedImage_cards_png_10;
    Image cachedImage_cards_png_11;
    Image cachedImage_cards_png_12;
    Image cachedImage_zastawa_jpg_13;
    ScopedPointer<ImageButton> imageButton3;
    ScopedPointer<ImageButton> imageButton;
    ScopedPointer<ImageButton> imageButton2;
    char labelText[50];
     short int licznik=0,bank=0,myMoney=1500,myPoint,opPoint,bigger;
    bool playGame=false,menu=true;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Interface)
};
