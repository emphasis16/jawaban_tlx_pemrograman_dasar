#include <iostream>
using namespace std;

int m;
int n;
int bola;
int arr[1000][1000];
int total = 0;
int b;
int k;

void game(int b, int k){
    if(arr[b][k] == bola){
        total++;
        arr[b][k] = -1;
        game(b + 1, k);
        game(b - 1, k);
        game(b, k + 1);
        game(b, k - 1);
    }
}

int main(){
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> b >> k;
    bola = arr[b][k];
    game(b, k);
    cout << total * (total - 1);
}