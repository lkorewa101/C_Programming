#include <stdio.h>
int min(int a, int b, int c) {
  if (a < b && a < c) {
    return a;
  } else if (b < a && b < c) {
    return b;
  } else if (c < a && c < a) {
    return c;
  }

}
int main() {
  int n1, n2, n3;
  printf("Enter three integers : ");
  scanf("%d %d %d", &n1, &n2, &n3);
  printf("Smallest value : %d\n", min(n1, n2, n3));
  return 0;
}