#include <stdio.h>

int main() {
  int k,n ;

  printf("Masukkan bilangan K :");
  scanf("%d",&k);
  printf("Masukkan Bilangan n :");
  scanf("%d",&n);
  int count =1;
  for (int i=1; count<=n; i++)
    if (i%k!=0)
    {printf( "%d ",i);
    count++;}

  
  return 0;
}