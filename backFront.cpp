/*
  ==============================================================================

    backFront.cpp
    Created: 10 Oct 2017 2:02:31pm
    Author:  Микита Вовк

  ==============================================================================
*/
   
#include "backFront.h"
//#include "Interface.h"
#include <cstdlib>
#include <ctime>

void cardsHands::setCards(cardsAll *finder){
    int i,j=0,k;
    while (j<2){
        
        i=rand()%4;
        k=rand()%13;
        if (finder->getCard(i, k)==0){
            finder->setCard(i, k);
            
            mast[j]=i;
            num[j]=k;
            ++j;
        }

    }
}
//////////////////////////////////////

void cardsRazdacza::setCardsStol(cardsAll finder){
    unsigned int i,j=0,k;
    srand(time(0));
    myCards.setCards(&finder);
    opCards.setCards(&finder);
    for(i=0;i<2;i++){
        finder.setCard(myCards.getMastCards(i),myCards.getNumCards(i));
        finder.setCard(opCards.getMastCards(i),opCards.getNumCards(i));
    }
    while (j<5){
        
        
        i=rand()%4;
        k=rand()%13;
        if (finder.getCard(i, k)==0){
            finder.setCard(i, k);
            
            mast[j]=i;
            num[j]=k;
            ++j;
        }
    }
}

void copy(int *copy,int *all){
    
    for(int i=0;i<7;i++){
        copy[i]=all[i];
    }
    
}



void array_num(cardsRazdacza table,bool myOrop,int *cards){
    int i,j=0;
    if(myOrop){
        for (i=0;i<7;++i){
            if (i<2)
                cards[i]=table.getMyNum(i);
            else{
                cards[i]=table.getNumCards(j);
                ++j;
            }
        }
    }
    else{
        for (i=0;i<7;++i){
            if (i<2)
                cards[i]=table.getOpNum(i);
            else{
                cards[i]=table.getNumCards(j);
                ++j;
            }
        }
    }
}
void array_mast(cardsRazdacza table,bool myOrop,int *cards){
    int i,j=0;
    if(myOrop){
        for (i=0;i<7;++i){
            if (i<2)
                cards[i]=table.getMyMast(i);
            else{
                cards[i]=table.getMastCards(j);
                ++j;
            }
        }
    }
    else{
        for (i=0;i<7;++i){
            if (i<2)
                cards[i]=table.getOpMast(i);
            else{
                cards[i]=table.getMastCards(j);
                ++j;
            }
        }
    }
}

//1 1 0 0 0 0 0
void combination:: para(int *all){
    int i,j=0;
    /* for (i=0;i<7;++i){
     if (i<2)
     all[i]=hands.num[i];
     else{
     all[i]=table.num[j];
     ++j;
     }
     }
     sortuj(all);*/
    
    j=0;
    for(i=6;i>0;i--){
        
        if ((all[i]-all[i-1])==0){
            paraArr[j]=all[i];
            j++;
            
            if(j==1){
                paraArr[j]=all[i-1];
                break;
            }
        }
        else{
            for(j=0;j<2;j++)
                paraArr[j]=-1;
            j=0;
        }
    }
    
    //  for(i=0;i<2;++i)
    //   cout<<i+1<<"____"<<paraArr[i]<<endl;
    
    
}
void combination:: dwa_para(int *allCards){
    int i,all[7];
    copy(all,allCards);
    para(all);
    
    if(paraArr[1]!=-1){
        
        dwa_paraArr[0]=paraArr[0];
        dwa_paraArr[1]=paraArr[1];
        
        for (i=0;i<7;++i){
        
            if(all[i]==paraArr[1])
                all[i]=-1;
            
        }
        sortuj(all);
        
        para(all);
        
        if(paraArr[1]!=-1){
            
            dwa_paraArr[2]=paraArr[0];
            dwa_paraArr[3]=paraArr[1];
        }
        else{
            for(i=0;i<4;++i)
                dwa_paraArr[i]=-1;
        }
    }
    else{
        for(i=0;i<4;++i)
            dwa_paraArr[i]=-1;
        
    }
    
    // for(i=0;i<4;++i)
    //   cout<<dwa_paraArr[i]<<endl;
    
}



void combination::set( int *all){
    int i,j=0;/*all[7];
               for (i=0;i<7;++i){
               if (i<2)
               all[i]=hands.num[i];
               else{
               all[i]=table.num[j];
               ++j;
               }
               }
               sortuj(all);
               */
    j=0;
    for(i=6;i>0;i--){
        
        if ((all[i]-all[i-1])==0){
            setArr[j]=all[i];
            j++;
            
            if(j==2){
                setArr[j]=all[i-1];
                break;
            }
        }
        else{
            for(j=0;j<3;j++)
                setArr[j]=-1;
            j=0;
        }
    }
    if(setArr[2]==-1){
        for(j=0;j<3;j++)
            setArr[j]=-1;}
    
    // for(i=0;i<3;++i)
    //  cout<<i+1<<"____"<<setArr[i]<<endl;
}


void combination::flash( int *all){
    int i,j=0;/*all[7];
               for (i=0;i<7;++i){
               if (i<2)
               all[i]=hands.mast[i];
               else{
               all[i]=table.mast[j];
               ++j;
               }
               }
               sortuj(all);
               */
    j=0;
    for(i=6;i>0;i--){
        
        if ((all[i]-all[i-1])==0){
            flashArr[j]=all[i];
            j++;
            
            if(j==4){
                flashArr[j]=all[i-1];
                break;
            }
        }
        else{
            for(j=0;j<5;j++)
                flashArr[j]=-1;
            j=0;
        }
    }
    
    if(flashArr[4]==-1){
        for(j=0;j<5;j++)
            flashArr[j]=-1;}
    //  for(i=0;i<5;++i)
    //    cout<<i+1<<"____"<<flashArr[i]<<endl;
    
    
    
    
    
    
}

void combination::strit( int *all){
    int i,j=0;/*all[7];
               for (i=0;i<7;++i){
               if (i<2)
               all[i]=hands.num[i];
               else{
               all[i]=table.num[j];
               ++j;
               }
               }
               sortuj(all);
               */
    j=0;
    for(i=6;i>0;i--){
        
        if ((all[i]-all[i-1])==1){
            stritArr[j]=all[i];
            j++;
            
            if(j==4){
                stritArr[j]=all[i-1];
                break;
            }
        }
        else{
            for(j=0;j<5;j++)
                stritArr[j]=-1;
            j=0;
        }
    }
    
    
    if(stritArr[4]==-1){
        for(j=0;j<5;j++)
            stritArr[j]=-1;}
    
    
    //        for(i=0;i<5;++i)
    //    cout<<i+1<<"____"<<stritArr[i]<<endl;
}


void combination::kare( int *all){
    int i,j=0;/*all[7];
               for (i=0;i<7;++i){
               if (i<2)
               all[i]=hands.num[i];
               else{
               all[i]=table.num[j];
               ++j;
               }
               }
               sortuj(all);
               */
                  j=0;
    for(i=6;i>0;i--){
        
        if ((all[i]-all[i-1])==0){
            kareArr[j]=all[i];
            j++;
            
            if(j==3){
                kareArr[j]=all[i-1];
                break;
            }
        }
        else{
            for(j=0;j<4;j++)
                kareArr[j]=-1;
            j=0;
        }
    }
    if(kareArr[3]==-1){
        for(j=0;j<4;j++)
            kareArr[j]=-1;}
    
    // for(i=0;i<4;++i)
    //    cout<<i+1<<"____"<<kareArr[i]<<endl;
}

void combination::full_house(int *allCards){
    
    int i,all[7];
    copy(all,allCards);
    set(all);
    
    if(setArr[1]!=-1){
        
        full_houseArr[0]=setArr[0];
        full_houseArr[1]=setArr[1];
        full_houseArr[2]=setArr[2];
        
        for (i=0;i<7;++i){
            if(all[i]==setArr[1])
                all[i]=-1;
            
        }
        sortuj(all);
        
        para(all);
        
        if(paraArr[1]!=-1){
            
            full_houseArr[3]=paraArr[0];
            full_houseArr[4]=paraArr[1];
        }
        else{
            for(i=0;i<5;++i)
                full_houseArr[i]=-1;
        }
    }
    else{
        for(i=0;i<5;++i)
            full_houseArr[i]=-1;}
    
    
    //  for(i=0;i<5;++i)
    //    cout<<i+1<<"____"<<full_houseArr[i]<<endl;
    
}

int combination::ocenaMethod(cardsRazdacza table,bool myOrop){
    int allNum[7],allMast[7];
    array_num(table, myOrop, allNum);
    sortuj(allNum);
    array_mast(table, myOrop, allMast);
    sortuj(allMast);
    kare(allNum);
    if (kareArr[0]!=-1){
        //cout<<"\nKARE WITH : \n";
      //  opredel_num(kareArr[0]);
        //cout<<endl;
        return 6;
    }
    full_house(allNum);
    if (full_houseArr[0]!=-1){
        //cout<<"\n FULL HOUSE WITH : \n";
       // opredel_num(full_houseArr[0]);
       // cout<<" AND \n";
       // opredel_num(full_houseArr[3]);
        //cout<<endl;
        return 5;
    }/*
      array_num(table, myOrop, allNum);
      sortuj(allNum);*/
    flash(allMast);
    if (flashArr[4]!=-1){
        //cout<<"\n FLASH WITH : \n";
      //  opredel_mast(flashArr[0]);
       // cout<<endl;
        return 4;
    }
    strit(allNum);
    if (stritArr[4]!=-1){
        //cout<<"\nSTRIT FROM : \n";
        //opredel_num(stritArr[0]);
        //cout<<"TO : \n";
       // opredel_num(stritArr[4]);
       // cout<<endl;
        
        return 3;
    }
    
    set(allNum);
    if (setArr[0]!=-1){
  //      cout<<"\nSET WITH : \n";
        //opredel_num(setArr[0]);
    //    cout<<endl;
        return 2;
    }
    dwa_para(allNum);
    if (dwa_paraArr[0]!=-1){
      //  cout<<"\nDWE PARY FROM : \n";
      //  opredel_num(dwa_paraArr[0]);
     //   cout<<"TO : \n";
      //  opredel_num(dwa_paraArr[3]);
    //    cout<<endl;
        
        return 1;
    }
   /* array_num(table, myOrop, allNum);
     sortuj(allNum);*/
    para(allNum);
    
    if (paraArr[0]!=-1){
       // label->setText("para", NotificationType::sendNotification);

    //    cout<<"\nPARA WITH : \n";
        //opredel_num(paraArr[0]);
       // cout<<endl;
        return 0;
    }
  //  cout<<"\nNOTHING \n";
    
    
    return -1;
}

void sortuj (int *cards){
    int j=0,buf;
    while(j<6)
        if(cards[j]<=cards[j+1])
            j++;
        else{
            buf=cards[j];
            cards[j]=cards[j+1];
            cards[j+1]=buf;
            j=0;}
    
    
}

