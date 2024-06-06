#include <stdio.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX) {

    T[N] = X;
    int i = 0;


    while (T[i] != X) {
        i++;
    }


    if (i < N) {
        *IX = i + 1; 
    } else {
        *IX = 0; 
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 0}; // Extra space for sentinel
    int N = 10; 
    int IX;

 
    SEQSearchWithSentinel(T, N, 52, &IX);
    printf("Index of 52: %d\n", IX);

    
    SEQSearchWithSentinel(T, N, 10, &IX);
    printf("Index of 10: %d\n", IX);

    return 0;
}