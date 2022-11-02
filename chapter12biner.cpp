#include <iostream>
#include <math.h>

using namespace std;

int n;

string biner(int n){
    if (n == 1){
        return "1";
    }else if (n%2 == 1){
        return biner(n/2) + "1";
    }else if (n%2 == 0){
        return biner(n/2) + "0";
    }
}

int main(){
    cin >> n;
    cout << biner(n);
}