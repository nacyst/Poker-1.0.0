/*
  ==============================================================================

    cardsAll.h
    Created: 12 Jan 2018 2:47:35pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
class cardsAll{
public:

    void wyzeruj(){
        for(int i=0;i<4;i++)
            {
                for(int k=0;k<13;k++)
                    cards[i][k]=0;
            }
        };

    static int getCard(int i,int k){return cards[i][k];};
protected:
    static unsigned int cards[4][13];

};

