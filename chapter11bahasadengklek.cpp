#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    string s;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++){
        if ((s[i] >= 'A') && (s[i] < 'a')){
            s[i] = s[i] + ('a' - 'A');
        } else if (s[i] >= 'a'){
            s[i] = s[i] - ('a' - 'A');
        }
    }
    
    cout << s;
}