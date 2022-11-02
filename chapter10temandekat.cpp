#include <iostream>
#include <math.h>

using namespace std;

int kedekatan(int xj, int xi, int yj, int yi, int d){
    return (pow(abs(xj-xi), d) + pow(abs(yj-yi), d));
}

int main(){
    int N, i, D, j, hasil, terbesar=0, terkecil=0;
    int data[1001][2];
    
    //scan jumlah siswa dan pangkat
    cin >> N >> D;
    
    //input faktor para siswa
    for(i=0; i<N; i++){
        for(j=0; j<2; j++){
            cin >> data[i][j];
        }
    }
    
    //perhitungan
    for(i=0; i<N; i++){
        for (j=i+1; j<N; j++){
            hasil = kedekatan(data[j][0], data[i][0], data[j][1], data[i][1],D);
            if ((terkecil==0) && (terbesar==0)){
                terkecil = hasil;
                terbesar = hasil;
            }
            if (hasil > terbesar) {
                terbesar = hasil;
            }else if (hasil < terkecil) {
                terkecil = hasil;
            }
        }
    }
    
    //cetak
    cout << terkecil << " " << terbesar;
}