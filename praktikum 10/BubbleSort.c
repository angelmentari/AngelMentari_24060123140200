#include <stdio.h>

void bubbleSort(int T[], int n)
{
    int k;
    int pass;
    int temp;

    for (pass = 0; pass < (n - 1); pass++) {
        for (k = (n - 1); k > pass; k--) {
            if (T[k] < T[k - 1]) {
                temp = T[k];
                T[k] = T[k - 1];
                T[k - 1] = temp;
            }
        }
    }
}

int main()
{
    int T[] = {7, 1, 0, 5, 3, 0, 6} ;
    int n = sizeof(T) / sizeof(T[0]) ;

    bubbleSort(T, n) ;
    printf("\nSorted array : [") ;
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", T[i]) ;
        } else {
            printf("%d", T[i]) ;
        }
    }
    printf("]") ;
    printf("\n") ;
    printf("\n") ;

    return 0 ;
}