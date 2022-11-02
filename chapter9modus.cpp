#include <cstdio>
#include <cstring>

int main() {
    int N;
    int i;
    scanf("%d", &N);
    int arr[1001];
    memset (arr, 0, sizeof arr);
    
    for (i=0; i<N; i++){
        int bil;
        scanf("%d", &bil);
        arr[bil]++;
    }
    
    int terbesar = 0;
    int hasil = -1;
    for (i=0; i<=1000; i++){
        if (arr[i] >= terbesar){
            terbesar = arr[i];
            hasil = i;
        }
    }
    
    printf("%d\n", hasil);
}