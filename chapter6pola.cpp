#include <cstdio>

int main(){
    int bil;
    int i;
    int sensor;
    int lok[1000];
    //scan angka
    scanf("%d %d", &bil, &sensor);

    //assign angka ke array
    for (i=1; i<=bil; i++){
        lok[i] = i;
    }
    
    //printangka
    for (i=1; i<=bil; i++){
        if(lok[i] % sensor == 0){
            printf("* ");
        }else{
            printf("%d ", lok[i]);
    }
}
}