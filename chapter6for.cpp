#include <cstdio>

int main() {
    int N;
    int angka;
    int hasil = 0;
    int i;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &angka);
        hasil += angka;
    }
    printf("%d", hasil);
}