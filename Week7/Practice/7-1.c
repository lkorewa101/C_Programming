#include <stdio.h>

int main() {
  int a, b, tmp;

  scanf("%d %d", &a, &b);

  int *pa = &a;
  int *pb = &b;

  tmp = *pa;
  *pa = *pb;
  *pb = tmp;

  printf("%d %d\n", *pa, *pb);

  return 0;
}