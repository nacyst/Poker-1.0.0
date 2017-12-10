/*
  ==============================================================================

    backFront.h
    Created: 10 Oct 2017 2:02:31pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
//#include "Interface.h"
void opredel_mast(int mast);
void opredel_num ( int num);
void sortuj (int *cards);

//////////////////////////////////////

class cardsAll{
public:
    //   void set_mastAll(int i){mast[i]++;};
    //   void set_numAll(int i){num[i]++;};
    void setCard(int i,int k){++cards[i][k];};
    //    int get_mastAll(int i){return mast[i];};
    //  int get_numAll(int i){return num[i];};
    int getCard(int i,int k){return cards[i][k];};
private:
    unsigned int cards[4][13]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0};
    // unsigned  int num[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
};


//////////////////////////////////////
class cardsHands{
public:
    void setCards(cardsAll *finder);
    int getMastCards(int i){return mast[i];};
    int getNumCards(int i){return num[i];};
    
    
private:
    
    int mast[2];//={2,2};
    int num[2];//={5,11};
};
//////////////////////////////////////
class cardsRazdacza{
public:
    void setCardsStol(cardsAll finder);
    
    int getMyMast(int i){return myCards.getMastCards(i);};
    int getMyNum(int i){return myCards.getNumCards(i);};
    
    int getOpMast(int i){return opCards.getMastCards(i);};
    int getOpNum(int i){return opCards.getNumCards(i);};
    
    int getMastCards(int i){return mast[i];};
    int getNumCards(int i){return num[i];};
    
private:
    
    cardsHands myCards,opCards;
    int mast[5];//={0,2,2,2,1};
    int num[5];//={11,5,2,3,11};
    
};


class combination{
public:
    int ocenaMethod(cardsRazdacza table,bool myOrop);
    
    void strit(int *all);
    void flash(int *all );
    void kare(int *all );
    void set(int *all );
    void dwa_para(int *all );
    void  para(int *all );
    void full_house(int *all );
private:
    int stritArr[5];
    int flashArr[5];
    int kareArr[4];
    int setArr[3];
    int dwa_paraArr[4];
    int paraArr[2];
    int full_houseArr[5];
    int ocena;
};

void array_num(cardsRazdacza  table,bool myOrop,int *cards);
void array_mast(cardsRazdacza  table,bool myOrop,int *cards);
void copy(int *copy,int *all);
