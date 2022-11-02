#include <cstdio>

int N, M, P;
int matriksA[101][101];
int matriksB[101][101];
int matriksC[101][101] = {0};

int main() {
  scanf("%d %d %d", &N, &M, &P);
  //daftarkan matriksA
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &matriksA[i][j]);
    }
  }

  //daftarkan matriksB
   for (int i = 0; i < M; i++) {
    for (int j = 0; j < P; j++) {
      scanf("%d", &matriksB[i][j]);
    }
  }

  //matriksC
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < P; j++) {
        for(int k=0; k<M; k++){
            matriksC[i][j] = matriksC[i][j] + (matriksA[i][k]*matriksB[k][j]);
        }
    }
 }

  //print matriksC
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < P; j++) {
      printf("%d", matriksC[i][j]);
      if (j < P-1) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }
}