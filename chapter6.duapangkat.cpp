#include <cstdio>

int main(){
    //input
    int bil;
    scanf("%d", &bil);
    //cek genap
    while(bil % 2 == 0){
        bil = bil / 2;
    }
    //cek pangkat
    if(bil == 1){
        printf("ya\n");
    } else {
        printf("bukan\n");
    }
}