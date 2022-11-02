#include <cstdio>

int reverse(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }

  return ret;
}

int main() {
  int a, b, balik1, balik2;
  scanf("%d %d", &a, &b);
  balik1 = reverse(a) + reverse(b);
  balik2 = reverse(balik1);
  printf("%d\n", balik2);
}