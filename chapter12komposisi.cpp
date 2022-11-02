#include <iostream>
#include <math.h>

using namespace std;

int fungsi(int a, int b, int k, int x){
    if (k == 1){
        return abs(a * x + b);
    }else {
        return abs(a * fungsi(a, b, k-1, x) + b);
    }
}

int main(){
    int a, b, k, x;

    cin >> a >> b >> k >> x;

    cout << fungsi(a, b, k, x);
}