/*
  ==============================================================================

    cardsHands.h
    Created: 12 Jan 2018 2:48:19pm
    Author:  Микита Вовк

  ==============================================================================
*/

#include <cstdlib>
#include <ctime>
#include "cardsAll.h"
#pragma once
class cardsHands:public cardsAll{
public:
    void setCards();
    int getMastCards(int i){return mast[i];};
    int getNumCards(int i){return num[i];};
    
    
protected:
    
    int mast[2];//={2,2};
    int num[2];//={5,11};
};
