/*
  ==============================================================================

    findCard.cpp
    Created: 10 Oct 2017 2:02:10pm
    Author:  Микита Вовк

  ==============================================================================
*/

#include "findCard.h"
//#include "backFront.h"


void opredel::opredelCards(int mast,int num){
    int x,y;
    //223;
    if (mast==0){
        y=5;

    }
    if (mast==1){
        //y=115;
        y=232;
    }
    
    if (mast==2)
    {
       // y=227;
        y=455;

    }
    
    if (mast==3){
        //y=340;
        y=676;

    }
    
    
   //153
    
    if(num==0){
        //x=80;
        x=160;
    }
    if(num==1)
       // x=160;
       x=312;
    
    
    if(num==2)
      //  x=230;
       x=465;
    
    if(num==3)
     //   x=310;
        x=616;
    
    if(num==4)
       // x=385;
        x=771;
    
    if(num==5)
      //  x=465;
        x=924;
    
    if(num==6)
      //  x=540;
        x=1077;
    
    if(num==7)
        //x=615;
        x=1230;
    
    if(num==8)
       // x=692;
        x=1383;
    
    if(num==9)
       // x=770;
        x=1536;
    
    if(num==10)
        //x=845;
        x=1689;
    
    if(num==11)
        //x=920;
        x=1842;
    
    if(num==12)
        x=7;
    
    
    
    
    
    
    Rectangle<int>buf(x,y,150,223);//x+150,y+223);
    
    
    area=buf;
    
    
}


