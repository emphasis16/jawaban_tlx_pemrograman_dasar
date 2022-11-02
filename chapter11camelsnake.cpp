#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    
    cin >> s;
    
    if(s.find("_") != -1){
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '_'){
            s.erase(i, 1);
            s[i] = s[i] - ('a' - 'A');
        }
    }} else {
        for (int i = 0; i < s.length(); i++){
        if ((s[i] >= 'A') && (s[i] < 'a')){
            s[i] = s[i] + ('a' - 'A');
            s.insert(i, "_");
        }
    }
    }
    cout << s;
}

