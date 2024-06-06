#include <stdio.h>

void BinSearch1(int T[], int N, int X, int *Found, int *IX) {
    int Atas, Bawah, Tengah;
    Atas = N;
    Bawah = 1;
    *Found = 0;
    *IX = 0;
    Tengah = (Atas + Bawah) / 2;
    
    while ((Atas >= Bawah) && (*Found == 0)) {
        if (T[Tengah] == X) {
            *Found = 1;
            *IX = Tengah;
        } else {
            if (T[Tengah] < X) {
                Bawah = Tengah + 1;
            } else {
                Atas = Tengah - 1;
            }
            Tengah = (Atas + Bawah) / 2;
        }
    }
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = sizeof(T) / sizeof(T[0]);
    int X = 41;
    int Found, IX;

    BinSearch1(T, N, X, &Found, &IX);

    if (Found) {
        printf("Element ketemu di index %d\n", IX);
    } else {
        printf("Element tidak ketemu\n");
    }
    return 0;
}