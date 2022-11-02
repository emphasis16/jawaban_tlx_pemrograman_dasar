#include <cstdio>

int main() {
    int N;
    int x=0;
    
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", x);
            x++;
            if(x==10) {
            x = 0;
        }
    }
    printf("\n");
    }
}