#include <stdio.h>
#include <math.h>

int main() {
    int angka,N,i,j,salah;
    scanf("%d",&N);
    for(j=0;j<N;j++) {
        scanf("%d",&angka);
        for(i=2;i<=trunc(sqrt(angka));i++) {
            if (angka%i == 0) {
                salah = 1;
            }
        }
        if (salah || angka == 1) {
            salah = 0;
            printf("BUKAN\n");
        }
        else {
            printf("YA\n");
        }
    }
}