#include <stdio.h>
#include <stdbool.h>

bool binarySearch(int T[], int N, int X) {
    int Atas = 0;
    int Bawah = N - 1;
    bool Found = false;

    while (Atas <= Bawah && !Found) {
        int Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            Found = true;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    }

    return Found;
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = sizeof(T) / sizeof(T[0]);

    
    int X1 = 41;
    bool found1 = binarySearch(T, N, X1);
    if (found1) {
        printf("Element %d ketemu di array.\n", X1);
    } else {
        printf("Element %d tidak ketemu di array.\n", X1);
    }

    
    int X2 = 8;
    bool found2 = binarySearch(T, N, X2);
     if (found2) {
        printf("Element %d ketemu di array.\n", X2);
    } else {
        printf("Element %d tidak ketemu di array.\n", X2);
    }

    return 0;
}