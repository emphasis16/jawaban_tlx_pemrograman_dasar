#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string target, dicari;
    
    cin >> target >> dicari;
    while((target.find(dicari) < target.length()) && (target.find(dicari) >= 0)){
        target.erase(target.find(dicari), dicari.length());
    }
    
    cout << target << endl;
}