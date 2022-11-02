#include <iostream>

using namespace std;

int fungsi (int a, int b, int x){
    int hasil;
    hasil = abs(a * x  + b);
    return hasil;
}

int main(){
    int a, b, k, x;

    cin >> a >> b >> k >> x;

    for (int i = 0; i < k; i++){
        x = fungsi(a, b, x);
    }

    cout << x;
}