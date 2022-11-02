#include <cstdio>

int main(){
    //input
    int bil;
    int i;
    scanf("%d", &bil);
    //faktor
    for (i=bil; i>0; i--){
        if(bil % i == 0){
            printf("%d\n", i);
        }
    }
}