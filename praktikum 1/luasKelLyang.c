#include <stdio.h> /Header file/

int main () {
    int s1,s2,d1,d2;
    float L,K;
    
    printf("masukkan s1 = ");
    scanf("%d",&s1);
    printf("masukkan s2 = ");
    scanf("%d",&s2);
    printf("masukkan d1 = ");
    scanf("%d",&d1);
    printf("masukkan d2 = ");
    scanf("%d",&d2);

    L = 0.5*d1*d2;

    printf("Luas : %f meter/n",L);



    K = 2 * (s1 + s2);

    printf("Keliling ; %f meter/n",K);

    return 0;

}