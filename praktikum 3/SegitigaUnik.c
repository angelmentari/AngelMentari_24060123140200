#include <stdio.h>

int main(){
    int i, j, n, count;

    printf("Masukkan n: ");
    scanf("%d", &n);

    count = 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d", count % 10);
            count ++;
        }
        printf("\n:");

    }
    return 0;
}