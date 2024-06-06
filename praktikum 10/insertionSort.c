#include <stdio.h>

void insertSort(int T[], int n)
{
    int i;
    int pass;
    int temp;

    for (pass = 1; pass < n; pass++) {
        temp = T[pass];
        i = pass - 1;

        while ((temp < T[i]) && (i > 1)) {
            T[i + 1] = T[i];
            i = i - 1;
        }

        if (temp >= T[i]) {
            T[i + 1] = temp;
        } else if (temp < T[i]) {
            T[i + 1] = T[i];
            T[i] = temp;
        }
    }
}

int main()
{
    int T[] = {7, 1, 0, 5, 3, 0, 6} ;
    int n = sizeof(T) / sizeof(T[0]) ;

    insertSort(T, n) ;
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