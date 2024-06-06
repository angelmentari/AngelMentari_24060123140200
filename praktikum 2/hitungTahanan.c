#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    float a,b,c,t;

    //Algoritma
    printf("Masukkan nilai tahanan pertama : ");
    scanf("%f", &a);
    printf("Masukkan nilai tahanan kedua : ");
    scanf("%f", &b);
    printf("Masukkan nilai tahanan ketiga : ");
    scanf("%f", &c);

    if ((a>0) && (b>0) && (c>0)){
        t = a + b + c;
        printf("%.2f",t);
    }else{
        printf("Masukkan tahanan tidak boleh negatif");
    }
    return 0;
}