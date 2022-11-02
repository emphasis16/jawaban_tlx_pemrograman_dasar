#include <cstdio>

int main(){
    int hasil = 0;
    int masukan;
    
    while (scanf("%d", &masukan) != EOF){
        hasil = hasil + masukan;
    }
    printf("%d", hasil);
}