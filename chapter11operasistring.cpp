#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string baris1, baris2, baris3, baris4;
    int i;
    cin >> baris1 >> baris2 >> baris3 >> baris4;
    
    baris1.erase(baris1.find(baris2), baris2.length());
    baris1.insert(baris1.find(baris3)+baris3.length(), baris4);
    
    cout << baris1;
}