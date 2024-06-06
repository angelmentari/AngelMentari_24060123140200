#include <stdio.h>
#include <stdlib.h>

int main () {
    int i;

    printf("Masukan sembarang nilai lebih dari 0: ");
    scanf("%d", &i);
    printf("Bilangan sempurnanya adalah");
    for(int y = 1; y <= i; y++){
        int sum = 0;
        for(int x = 1; x < y; x++){
            if(y % x == 0){sum+=x;}
            else{continue;}}
        if(sum == y){
            if(y == 6){printf(" %d", y);}
            else{printf(", %d", y);}}
        else{continue;}}

    return 0;
}