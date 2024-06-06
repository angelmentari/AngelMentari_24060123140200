int main() {
    //Kamus
    int N, i, m,c=0;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if (N>0){
        if (N == 1) printf("1 Bukan Bilangan Prima");
        else{
            m = N/2;
            for(i=2; (i<=m); i++){
                if (N%i == 0){
                    printf("%d Bukan Bilangan Prima", N);
                    c =1;
                    break;
                }
            }

            if (c==0) printf("%d Bilangan Prima", N);
        }
    }else{
        printf("Masukkan input bernilai integer positif");
    }
    return 0;
}
