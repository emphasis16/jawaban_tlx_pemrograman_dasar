#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int n, r, c;
bool biner[128][128];
string coor[128*128];
void matrix(int r, int c, int k, string s){
    if (s != "1") {
        if(s.substr(1,1) == "0") {
            matrix(r, c, k/2, s = s.erase(1,1));
        } else if (s.substr(1,1) == "1") {
            matrix(r, c+k/2, k/2, s = s.erase(1,1));
        } else if (s.substr(1,1) == "2") {
            matrix(r + k/2, c, k/2, s = s.erase(1,1));
        } else if (s.substr(1,1) == "3") {
            matrix(r + k/2, c + k/2, k/2, s = s.erase(1,1));
        }
    } else {
        for (int i=r; i<r+k; i++){
            for (int j=c; j<c+k; j++) {
                biner[i][j] = 1;
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> coor[i];
    }
    
    cin >> r >> c;
    int maxRC = max(r, c);
    int pow2 = 1;
    
    while (maxRC > pow2) {
        pow2 *= 2;
    }
    
    for (int i=0; i<n; i++){
        matrix(0, 0, pow2, coor[i]);
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << biner[i][j] << " ";
        }
        cout << endl;
    }
}