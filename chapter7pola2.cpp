#include <cstdio>

int main() {
    int i;
    int N;
    int bin;
    int spas;
    
    scanf("%d", &N);
    for(i = 1; i<= N; i++){
        for(spas = i+1; spas<=N; spas++){
            printf(" ");
        }
        for(bin = 1; bin<=i; bin++){
            printf("*");
        }
        printf("\n");
    }
}