/*
  ==============================================================================

    cardsHands.cpp
    Created: 12 Jan 2018 2:48:19pm
    Author:  Микита Вовк

  ==============================================================================
*/

#include "cardsHands.h"
void cardsHands::setCards(){
    int i,j=0,k;
    while (j<2){
        
        i=rand()%4;
        k=rand()%13;
        if ( cardsAll::cards[i][k] ==0){
            
            ++cards[i][k];
            
            mast[j]=i;
            num[j]=k;
            ++j;
        }
        
    }
}
