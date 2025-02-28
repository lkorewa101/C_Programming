#include <stdio.h>

int Fibonach(int a) {
  int n1 = 1, n2 = 1;
  int tmp = 0;

  for (int i = 0; i < a; i++) {
    if(i == 0) {
      printf("%d ", n1);
      continue;
    }
    if(i == 1) {
      printf("%d ", n1);
      continue;
    }
    tmp = n1 + n2;
    printf("%d ", tmp);
    n1 = n2;
    n2 = tmp;
  }
}

int main() {
  int num;
  scanf("%d", &num);
  Fibonach(num);
  return 0;
}