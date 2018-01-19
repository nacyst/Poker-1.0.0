/*
  ==============================================================================

    cardsRazdacza.h
    Created: 12 Jan 2018 2:48:46pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
#include "cardsHands.h"

class cardsRazdacza:public cardsHands{
public:
    void setCardsStol();
   static int getMastCards(int i){return mast[i];};
    static int getNumCards(int i){return num[i];};
    void zmienSprawdzanie (){ sprawdzFlop=true; };
    
private:

    static int mast[5];
    static   int num[5];
    static bool sprawdzFlop;
    
};

