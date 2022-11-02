#include <cstdio>
#include <math.h>

double bil;
int fl,cl;

int main(){
    scanf("%lf", &bil);
    if (bil == trunc(bil)) {
        bil = trunc(bil);
        printf("%.0lf %.0lf", bil,bil);
    }else if (bil > 0){
        fl = trunc(bil);
        cl = fl+1;
        printf("%d %d", fl,cl);
    }else if (bil < 0){
        cl = trunc(bil);
        fl = cl-1;
        printf("%d %d", fl,cl);
    }
}