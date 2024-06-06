#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define namaBuku 30
#define maxBuku 100

typedef struct{
   char judul[namaBuku];
   int tersedia;
} Buku;

typedef struct{
   Buku buku[maxBuku];
   int NEff;
} Perpustakaan;

void tambahBuku(Perpustakaan *perpustakaan, char judul[]){
   if(perpustakaan->NEff < maxBuku){
      Buku bukuBaru;
      strcpy(bukuBaru.judul, judul);
      bukuBaru.tersedia = 1;
      perpustakaan->buku[perpustakaan->NEff] = bukuBaru;
      perpustakaan->NEff++;
      printf("Terimakasih\n");
   }else{
      printf("Penuh:C\n");
   }
}

void kembalikanBuku(Perpustakaan *perpustakaan, char judul[]){
   for(int i = 0; i < perpustakaan->NEff; i++){
      if(strcmp(perpustakaan->buku[i].judul, judul) == 0){
         perpustakaan->buku[i].tersedia++;
         printf("Terimakasih\n");
         return;
      }
   }
   tambahBuku(perpustakaan, judul);
}

void pinjemBuku(Perpustakaan *perpustakaan, char judul[]){
   for(int i = 0; i < perpustakaan->NEff; i++){
      if(strcmp(perpustakaan->buku[i].judul, judul) == 0){
         if(perpustakaan->buku[i].tersedia > 0){
            perpustakaan->buku[i].tersedia--;
            printf("Buku Berhasil Dipinjam\n");
            return;
         }else{
            printf("Maaf Stok Kosong\n");
            return;
         }
      }
   }
   printf("Maaf Stok Kosong\n");
}

void adakah(Perpustakaan *perpustakaan, char judul[]){
   for(int i = 0; i < perpustakaan->NEff; i++){
      if(strcmp(perpustakaan->buku[i].judul, judul) == 0){
         if(perpustakaan->buku[i].tersedia > 0){
            printf("%d\n", perpustakaan->buku[i].tersedia);
            return;
         }else{
            printf("0\n");
            return;
         }
      }
   }
   printf("0\n");
}

int main(){
   int perintah;
   char temp[namaBuku];
   Perpustakaan *perpustakaan;
   perpustakaan = (Perpustakaan*)malloc(sizeof(Perpustakaan));
   perpustakaan->NEff = 0;

   do{
      scanf("%d", &perintah);
      fgets(temp, namaBuku, stdin);

      switch(perintah){
         case 1:
            adakah(perpustakaan, temp);
            break;
         case 2:
            kembalikanBuku(perpustakaan, temp);
            break;
         case 3:
            pinjemBuku(perpustakaan, temp);
            break;
         default:
            break;
      }
   }while(perintah <= 3 && perintah >= 1);

   free(perpustakaan);

   return 0;
}