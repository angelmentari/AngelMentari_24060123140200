#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int N, i=1;

    //Algoritma
    printf("Masukkan bilangan : ");
    printf("");
    scanf("%d", &N);

    if (N <=0){
        printf("Masukkan input bernilai integer positif");
    }else{
        printf("Faktor bilangannya adalah : ");
        while (i < N+1){
            if (N%i == 0){
                printf("%d ",i);
            }
            i++;
        }
    }
    return 0;
}