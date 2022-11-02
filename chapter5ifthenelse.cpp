#include <cstdio>

int bil;

int main(){
    scanf("%d", &bil);
    if (bil > 0) {
        printf("positif\n");
    }else if (bil < 0){
        printf("negatif\n");
    }else {
        printf("nol");
    }
}