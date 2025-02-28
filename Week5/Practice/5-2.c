#include <stdio.h>

int main() {
  int num, count = 0;

  scanf("%d", &num);

  do {
    num /= 10;
    count++;
  } while(num != 0);

  printf("%d", count);

  return 0;
}