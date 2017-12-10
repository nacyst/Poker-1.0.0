/*
  ==============================================================================

    ButtonsMain.h
    Created: 10 Oct 2017 4:23:38pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
#include"Interface.h"

void Interface::sliderValueChanged (Slider* sliderThatWasMoved)
{
    
    if (sliderThatWasMoved == slider)
    {
        
    }
    
    
}

void Interface::buttonClicked (Button* buttonThatWasClicked)
{
   // int x=160,y=232;
  //  Rectangle<int> kek (x,y,150,223);//x+150,y+223);
    //playGame=false;
    
    //RAISE
    
    if (buttonThatWasClicked == textButton)
    {    if(playGame&&(myMoney>0)){
        
        bank+=slider->getValue();
        myMoney-=slider->getValue();
        slider->setRange (50, myMoney, 1);
                 showMoney();

        if(licznik==1){
            cachedImage_cards_png_2 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getMastCards(0),flopCards.getNumCards(0));
            cachedImage_cards_png_2=cachedImage_cards_png_2.getClippedImage(findCard.getArea());
            
            
            cachedImage_cards_png_3 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getMastCards(1),flopCards.getNumCards(1));
            cachedImage_cards_png_3=cachedImage_cards_png_3.getClippedImage(findCard.getArea());
            
            
            cachedImage_cards_png_4 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getMastCards(2),flopCards.getNumCards(2));
            cachedImage_cards_png_4=cachedImage_cards_png_4.getClippedImage(findCard.getArea());
            //licznik++;
            showMoney();
            repaint();
        }
        //playGame=false;
        if(licznik==2){
            cachedImage_cards_png_5 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getMastCards(3),flopCards.getNumCards(3));
            cachedImage_cards_png_5=cachedImage_cards_png_5.getClippedImage(findCard.getArea());
           
            showMoney();

            repaint();

        }
        if(licznik==3){
            cachedImage_cards_png_6 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getMastCards(4),flopCards.getNumCards(4));
            cachedImage_cards_png_6=cachedImage_cards_png_6.getClippedImage(findCard.getArea());
            showMoney();

            repaint();

        }
        if(licznik==4){
            cachedImage_cards_png_8 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getOpMast(0),flopCards.getOpNum(0));
            cachedImage_cards_png_8=cachedImage_cards_png_8.getClippedImage(findCard.getArea());
            
            cachedImage_cards_png_10 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(flopCards.getOpMast(1),flopCards.getOpNum(1));
            cachedImage_cards_png_10=cachedImage_cards_png_10.getClippedImage(findCard.getArea());
            
            whoWin();
   

            playGame=false;
            repaint();

        }


        licznik++;
        
    }
        if(myMoney<50)
            label->setText("You have not enough money to play!!!", NotificationType::sendNotification);

        
    }
    
    
    ///FOLD
    
  else  if (buttonThatWasClicked == textButton2)
    {
        playGame=false;
        licznik=5;
      //  label->setText("sosi", NotificationType::sendNotification);
    }
    
    //PlayGame
    
    else if (buttonThatWasClicked == textButton3)
        
    {
        
        //label->setText( std::to_string(155550), NotificationType::sendNotification);

        if(licznik==5){
            cachedImage_cards_png_2=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_3=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_4=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_5=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_6=ImageCache::getFromMemory (free_png, free_pngSize);

            
            licznik=0;
        }
        if((licznik==0)&&(myMoney>50)){
           flopCards.setCardsStol(finder);
            label->setText("", NotificationType::sendNotification);


            bank=50;
            myMoney-=50;
            showMoney();
            slider->setRange (50, myMoney, 1);
        cachedImage_cards_png_11 = ImageCache::getFromMemory (cards_png, cards_pngSize);
        findCard.opredelCards(flopCards.getMyMast(0),flopCards.getMyNum(0));
        cachedImage_cards_png_11=cachedImage_cards_png_11.getClippedImage(findCard.getArea());
            
        cachedImage_cards_png_12 = ImageCache::getFromMemory (cards_png, cards_pngSize);
        findCard.opredelCards(flopCards.getMyMast(1),flopCards.getMyNum(1));
        cachedImage_cards_png_12=cachedImage_cards_png_12.getClippedImage(findCard.getArea());
            
           // cachedImage__22359445_744499265740935_1042817326_n_png_7 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);
            
            //cachedImage__22359445_744499265740935_1042817326_n_png_9 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);
            cachedImage_cards_png_8 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);
            cachedImage_cards_png_10 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);

            
            licznik++;
            playGame=true;
            repaint();
            
        }
        else
            label->setText("You have not enough money to play!!!", NotificationType::sendNotification);

    }

    
    //  MENU
    
        else if (buttonThatWasClicked == textButton4){
            //label->setText("sosi", NotificationType::sendNotification);

            
            
            slider = nullptr;
            textButton = nullptr;
            textButton2 = nullptr;
            label = nullptr;
            textButton3 = nullptr;
            label2 = nullptr;
            label3 = nullptr;
            textButton4 = nullptr;

            
            addAndMakeVisible (imageButton = new ImageButton ("new button"));
            imageButton->setExplicitFocusOrder (50);
            imageButton->setButtonText (String());
            imageButton->addListener (this);
            
            imageButton->setImages (false, true, true,
                                    ImageCache::getFromMemory (continue_png, continue_pngSize), 1.000f, Colour (0x00000000),
                                    ImageCache::getFromMemory (continue_2_png, continue_2_pngSize), 1.000f, Colour (0x00000000),
                                    ImageCache::getFromMemory (continue_png, continue_pngSize), 1.000f, Colour (0x00000000));
            addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
            imageButton2->addListener (this);
            imageButton2->setExplicitFocusOrder (50);
            imageButton2->setButtonText (String());
            imageButton2->setImages (false, true, true,
                                     ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000),
                                     ImageCache::getFromMemory (help_2_png, help_2_pngSize), 1.000f, Colour (0x00000000),
                                     ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000));
            
           // imageButton->setBounds (272, 80, 152, 112);
          //  imageButton2->setBounds (216, 272, 264, 72);
            resized();
          
            cachedImage_zastawa_jpg_13=ImageCache::getFromMemory (zastawa_jpg, zastawa_jpgSize);
            menu=true;

            repaint();
            

            
        }

        
        
        ///START GAME
        
    
        
        else if (buttonThatWasClicked == imageButton)
    {
        addAndMakeVisible (slider = new Slider ("new slider"));
        slider->setRange (50, myMoney, 1);
        slider->setSliderStyle (Slider::LinearHorizontal);
        slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
        slider->addListener (this);
        slider->setValue(100);
        
        addAndMakeVisible (textButton = new TextButton ("new button"));
        textButton->setButtonText (TRANS("Raise"));
        textButton->addListener (this);
        textButton->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        addAndMakeVisible (textButton2 = new TextButton ("new button"));
        textButton2->setButtonText (TRANS("Fold"));
        textButton2->addListener (this);
        textButton2->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        
        addAndMakeVisible (label = new Label ("new label",
                                              String()));
        label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label->setJustificationType (Justification::centredLeft);
        label->setEditable (false, false, false);
        label->setColour (TextEditor::textColourId, Colours::black);
        label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (textButton3 = new TextButton ("new button"));
        textButton3->setButtonText (TRANS("Play Game"));
        textButton3->addListener (this);
        textButton3->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        addAndMakeVisible (textButton4 = new TextButton ("new button"));
        textButton4->setExplicitFocusOrder (20);
        textButton4->setButtonText (TRANS("Menu"));
        textButton4->addListener (this);
        textButton4->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        if (bank!=0){
            addAndMakeVisible (label2 = new Label ("new label",
                                                   "Bank: "+std::to_string(bank)));
            
        }else{
        addAndMakeVisible (label2 = new Label ("new label",
                                               String()));}
        label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label2->setJustificationType (Justification::centredLeft);
        label2->setEditable (false, false, false);
        label2->setColour (TextEditor::textColourId, Colours::black);
        label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (label3 = new Label ("new label",
                                               "Your money: "+std::to_string(myMoney)));
        label3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label3->setJustificationType (Justification::centredLeft);
        label3->setEditable (false, false, false);
        label3->setColour (TextEditor::textColourId, Colours::black);
        label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
      
        slider->setBounds (448, 456, 239, 24);
        textButton->setBounds (432, 392, 112, 48);
        textButton2->setBounds (560, 392, 112, 48);
        label->setBounds (0, 336, 232, 136);
        textButton3->setBounds (264, 456, 152, 24);
        label2->setBounds (288, 240, 88, 24);
        label3->setBounds (284, 380, 120, 60);
        textButton4->setBounds (640, 0, 48, 32);

        cachedImage_zastawa_jpg_13=ImageCache::getFromMemory (free_png, free_pngSize);
        imageButton = nullptr;
        imageButton2 = nullptr;
        menu=false;

        repaint();

    }
    
    //HELP
    
    else if (buttonThatWasClicked == imageButton2)
    {
        setSize (700, 588);
        addAndMakeVisible (imageButton3 = new ImageButton ("new button"));
        imageButton2->setExplicitFocusOrder (50);
        imageButton2->setButtonText (String());
        imageButton3->addListener (this);
        
        imageButton3->setImages (false, true, true,
                                 ImageCache::getFromMemory (comba_jpg, comba_jpgSize), 1.000f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000));
        
        


        imageButton3->setBounds (0, 483, 700, 104);

    }
    
    //HELP
    else if (buttonThatWasClicked == imageButton3){
         if(!menu){
         addAndMakeVisible (imageButton = new ImageButton ("new button"));
        addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
         }

       imageButton3 = nullptr;
 setSize (700, 483);
        //imageButton3 = nullptr;

    }
    
    
}
