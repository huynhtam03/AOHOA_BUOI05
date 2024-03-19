#include <stdio.h>

int is_square(int n) {
  if (n < 0) {
    return 0;
  }
  int sqrt_n = (int)sqrt(n);
  return sqrt_n * sqrt_n == n;
}
int count_square(int n) {
  int count = 0;
  for (int i = 1; i <= n; ++i) {
    if (is_square(i)) {
      count++;
    }
  }
  return count;
}
int main() {
  int n ;
  printf("Nhập số nguyên dương n: ");
  scanf("%d", &n);
  int count = count_square(n);
  printf("Có %d số chính phương nhỏ hơn %d:\n", count, n);
  for (int i = 1; i <= n; ++i) {
    if (is_square(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
