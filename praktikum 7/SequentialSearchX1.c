#include <stdio.h>
#include <stdlib.h>

void SEQSearchX1(int T[],int N,int X){
    //Kamus Lokal/
    int i,IX;

    //Algoritma/
    i = 0;
    while(i<N && T[i]!=X){
        i++;
    }
    if(T[i]==X){
        IX = i+1;
    }
    else{
        IX = 0;
    }

    printf("IX : %d\n", IX);
}

int main(){
    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;
    int X1 = 10;
    int X2 = 70;

    SEQSearchX1(T,N,X1);
    SEQSearchX1(T,N,X2);

    return 0;
}
