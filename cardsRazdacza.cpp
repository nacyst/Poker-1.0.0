/*
  ==============================================================================

    cardsRazdacza.cpp
    Created: 12 Jan 2018 2:48:46pm
    Author:  Микита Вовк

  ==============================================================================
*/

#include "cardsRazdacza.h"
int cardsRazdacza:: mast[5]={-1,-1,-1,-1,-1};
int cardsRazdacza:: num[5]={-1,-1,-1,-1,-1};
bool cardsRazdacza::sprawdzFlop=true;

void cardsRazdacza::setCardsStol(){
    unsigned int i,j=0,k;
    srand( unsigned(time(0)));
       cardsHands::setCards();

    if(sprawdzFlop){
        while (j<5){
            
            i=rand()%4;
            k=rand()%13;
            if (cards[i][k]==0){
                ++cards[i][k];
                
                mast[j]=i;
                num[j]=k;
                ++j;
            }
            }
        sprawdzFlop=false;
        }
    }
