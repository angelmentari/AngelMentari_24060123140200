#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void SEQSearchX2(int T[],int N,int X,int IX,bool Found){
    //Kamus Lokal/
    int i;

    //Algoritma/
    Found = false;
    i = 0;
    while(i<N && !Found){
        if(T[i] == X){
            Found = true;
        }
        else{
            i++;
        }
    }
    if(Found){
        IX = i+1;
    }
    else{
        IX = 0;
    }

    printf("IX : %d\n", IX);
}

int main(){
    int IX;
    bool Found;
    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;
    int X1 = 15;
    int X2 = 60;

    SEQSearchX2(T,N,X1,IX,Found);
    SEQSearchX2(T,N,X2,IX,Found);

    return 0;
}