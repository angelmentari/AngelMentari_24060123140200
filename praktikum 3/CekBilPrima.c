#include <stdio.h>
int main () {
    int i;
    int faktor = 0;

    printf("Masukan sembarangan nilai lebih dari 0: ");
    scanf("%d", &i);
    for(int x = 1;x <= i; x++){
        if(i % x == 0){faktor++;}
        else{continue;}}

    if(faktor == 2){
        printf("Bilangan Prima (faktor bilangannya adalah 1 dan %d)", i);}
    else{
        printf("Bukan Bilangan Prima (faktor bilangannya adalah 1");
        for(int y = 2;y < i; y++){
            if(i % y == 0){printf(", %d", y);}
            else{continue;}}
        if(faktor > 2){printf(", dan %d)", i);}
        else{printf(")");}
    }
return 0;
}
