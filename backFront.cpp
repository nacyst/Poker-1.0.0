//
//
///*
// ==============================================================================
// 
// backFront.cpp
// Created: 10 Oct 2017 2:02:31pm
// Author:  Микита Вовк
// 
// ==============================================================================
// */
//
#include "backFront.h"


void copy(int *copy,int *all,int ilosc){
    
    for(int i=0;i<ilosc;i++){
        copy[i]=all[i];
    }
    
}



void array_num(cardsRazdacza table,int ilosc,int *cards){
    int i,j=0;
        for (i=0;i<ilosc;++i){
            if (i<2)
                cards[i]=table.cardsHands::getNumCards(i);
            else{
                cards[i]=table.getNumCards(j);
                ++j;
            }
        }
    }


void array_mast(cardsRazdacza table,int ilosc,int *cards){
    int i,j=0;
    
        for (i=0;i<ilosc;++i){
            if (i<2)
                cards[i]=table.cardsHands::getMastCards(i);
            else{
                cards[i]=table.getMastCards(j);
                ++j;
            }
        }
}



void combination:: para(int *all,int ilosc){
    int i,j=0;

    
    j=0;
    for(i=ilosc-1;i>0;i--){
        
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
}

void combination:: dwa_para(int *allCards,int ilosc){
    int i,*all=new int[ilosc];
    copy(all,allCards,ilosc);
    para(all,ilosc);
    
    if(paraArr[1]!=-1){
        
        dwa_paraArr[0]=paraArr[0];
        dwa_paraArr[1]=paraArr[1];
        
        for (i=0;i<ilosc;++i){
            
            if(all[i]==paraArr[1])
                all[i]=-1;
            
        }
        sortuj(all,ilosc);
        
        para(all,ilosc);
        
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
    delete [] all;

    
}



void combination::set( int *all,int ilosc){
    int i,j=0;
    j=0;
    for(i=ilosc-1;i>0;i--){
        
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
    

}


void combination::flash( int *all,int ilosc){
    int i,j=0;
    j=0;
    for(i=ilosc-1;i>0;i--){
        
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

    
    
    
    
    
    
}

void combination::strit( int *all,int ilosc){
    int i,j=0;
    j=0;
    for(i=ilosc-1;i>0;i--){
        
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
    
    

}


void combination::kare( int *all,int ilosc){
    int i,j=0;
    j=0;
    for(i=ilosc-1;i>0;i--){
        
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
    
}

void combination::full_house(int *allCards,int ilosc){
    
    int i,*all=new int[ilosc];
    copy(all,allCards,ilosc);
    set(all,ilosc);
    
    if(setArr[1]!=-1){
        
        full_houseArr[0]=setArr[0];
        full_houseArr[1]=setArr[1];
        full_houseArr[2]=setArr[2];
        
        for (i=0;i<ilosc;++i){
            if(all[i]==setArr[1])
                all[i]=-1;
            
        }
        sortuj(all,ilosc);
        
        para(all,ilosc);
        
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
    
    delete [] all;

    
}

int combination::ocenaMethod(cardsRazdacza table,int ilosc){
    int *allNum=new int[ilosc];
    int *allMast=new int[ilosc];
    
    array_num(table, ilosc, allNum);
    sortuj(allNum,ilosc);
    array_mast(table, ilosc, allMast);
    sortuj(allMast,ilosc);

    if(ilosc>=5){
    kare(allNum, ilosc);
    if (kareArr[0]!=-1){
        return 6;
    }}
    
    
    if(ilosc>=5){
    full_house(allNum, ilosc);
    if (full_houseArr[0]!=-1){

        return 5;
    }}
    
    
    if(ilosc>=5){
    flash(allMast, ilosc);
    if (flashArr[4]!=-1){
        return 4;
    }}
    if(ilosc>=5){
    strit(allNum, ilosc);
    if (stritArr[4]!=-1){
        return 3;
    }}
    
    if(ilosc>=5){
    set(allNum, ilosc);
    if (setArr[0]!=-1){
        return 2;
    }}
    
    
    if(ilosc>=5){
    dwa_para(allNum, ilosc);
    if (dwa_paraArr[0]!=-1){
        return 1;
    }}
    

    if(ilosc>=2){
    para(allNum, ilosc);
    if (paraArr[0]!=-1){
        return 0;
    }}
    
    
    delete [] allNum;
    delete [] allMast;
    
    return -1;
}

void sortuj (int *cards,int ilosc){
    int j=0,buf;
    while(j<ilosc-1)
        if(cards[j]<=cards[j+1])
            j++;
        else{
            buf=cards[j];
            cards[j]=cards[j+1];
            cards[j+1]=buf;
            j=0;}
    
    
}


