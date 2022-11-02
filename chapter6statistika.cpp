#include <cstdio>

int main(){
    int bil;
    int i;
    int lok[1000];
    int max;
    int min;
    //scan angka
    scanf("%d", &bil);
    
    //scan angka sejumlah bilangan
    for (i=1; i<=bil; i++){
        scanf("%d", &lok[i]);
    }
    
    //set max dan min
    max = lok[1];
    min = lok[1];
    
    //cek max dan min
    for (i=1; i<=bil; i++){
        if (lok[i] >= max){
            max = lok[i];
        } else if (lok[i] <= min){
            min = lok[i];
        }
    }
    printf("%d %d", max, min);
}