#include <cstdio>

int bil;

int main(){
    scanf("%d", &bil);
    if (bil < 10) {
        printf("satuan");
    }else if ((bil < 100) && (bil >= 10)){
        printf("puluhan");
    }else if ((bil < 1000) && (bil >= 100)){
        printf("ratusan");
    }else if ((bil < 10000) && (bil >= 1000)){
        printf("ribuan");
    }else if ((bil < 100000) && (bil >= 10000)){
        printf("puluhribuan");}
}