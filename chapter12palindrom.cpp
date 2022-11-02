#include <iostream>
#include <math.h>

using namespace std;

int length;

bool palindrom(string s) {
    
    if (length == 1) {
        return 1;
    } else if (length == 2) {
        if (s[0] == s[length-1]){
            return 1;
        } else {
            return 0;
        }
    }
    bool kembar = (s[0] == s[length-1]);
    s.erase(length-1, 1);
    s.erase(0, 1);
    length = s.length();
    return kembar && palindrom(s);
}

int main(){
    string s;
    cin >> s;
    length = s.length();
    if (palindrom(s)){
        cout << "YA";
    } else {
        cout << "BUKAN";
    }
}