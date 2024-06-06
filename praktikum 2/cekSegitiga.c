#include <stdio.h>
int main(){

    //kamus
    int x,y,z;

    //algoritma
    printf("masukan nilai sisi segitiga 1 =");
    scanf("%d",&x);
    printf("maasukan nilai sisi segotiga 2 =");
    scanf("%d",&y);
    printf("masukan nilai sisi segitiga 3 =");
    scanf("%d",&z);


    if(x==y && x==z && y==z){
        printf("segitiga sama sisi" );
    }else if (x==y || y==z || z==x){
        printf("segitiga sama kaki ");
    }else if (x>0 && y>0 && z>0){
        printf("segitiga sembarang ");
    }else {
        printf("terdapat nilai yang bukan segitiga ");
    }

return 0;

}