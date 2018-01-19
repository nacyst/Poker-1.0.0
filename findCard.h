/*
  ==============================================================================

    findCard.h
    Created: 10 Oct 2017 2:02:10pm
    Author:  Микита Вовк

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class opredel{
public:
    opredel(){};
    void opredelCards(int mast,int numb);
    Rectangle<int> getArea(){
        return area;
    };
    ~opredel(){};
private:
    Rectangle<int> area;
};

