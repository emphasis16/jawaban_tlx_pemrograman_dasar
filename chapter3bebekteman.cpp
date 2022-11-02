#include <cstdio>

int N,M;
int main(){
    scanf("%d %d", &N, &M);
    printf("masing-masing %d\n", N/M);
    printf("bersisa %d", N%M);
}