//
///*
// ==============================================================================
//
// backFront.h
// Created: 10 Oct 2017 2:02:31pm
// Author:  Микита Вовк
//
// ==============================================================================
// */
//
#pragma once
#include "cardsRazdacza.h"



class combination{
public:
    int ocenaMethod(cardsRazdacza table,int ilosc);

    void strit(int *all,int ilosc);
    void flash(int *all ,int ilosc);
    void kare(int *all ,int ilosc);
    void set(int *all ,int ilosc);
    void dwa_para(int *all ,int ilosc);
    void  para(int *all,int ilosc );
    void full_house(int *all ,int ilosc);
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

void array_num(cardsRazdacza  table,int ilosc,int *cards);
void array_mast(cardsRazdacza  table,int ilosc,int *cards);
void copy(int *copy,int *all,int ilosc);
void sortuj (int *cards,int ilosc);





