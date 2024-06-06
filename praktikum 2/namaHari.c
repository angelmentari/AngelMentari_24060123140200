#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int h;

    //Algoritma
    printf("Masukkan nomor hari : ");
    scanf("%d", &h);

    switch(h){
        case 1 :
			printf("Senin");
			break;
        case 2 :
			printf("Selasa");
			break;
        case 3 :
			printf("Rabu");
			break;
        case 4 :
			printf("Kamis");
			break;
        case 5 :
			printf("Jumat");
			break;
        case 6 :
			printf("Sabtu");
			break;
        case 7 :
			printf("Minggu");
			break;
        default:
			printf("Masukkan nomor hari tidak tepat");
    }

    return 0;
}