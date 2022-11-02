#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    int K;
    int i;
    cin >> s;
    cin >> K;
    for (i=0; i<s.length(); i++){
        s[i] = ((s[i] - 'a' + K) % 26) + 'a';
    }
    cout << s;
}