#include <cstdio>

int bil;

int main(){
    scanf("%d", &bil);
    if(bil > 0) {
        if(bil % 2 == 0){
            printf("%d", bil);
        }
    }
}