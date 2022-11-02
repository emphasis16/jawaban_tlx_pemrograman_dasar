#include <cstdio>

int main() {
    int bil;
    scanf("%d", &bil);
    
    for (int i=1; i<=bil; i++){
        if (i % 10 == 0){
            continue;
        }else if(i == 42){
            printf("ERROR");
            break;
        }else printf("%d\n", i);
    }
}