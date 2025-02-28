#include <stdio.h>

int main() {
  int num;
  long long count = 1;

  scanf("%d", &num);

  while (num !=0) {
    if (num > 0) {
      count *= num;
    }
    scanf("%d", &num);
  }

  printf("%lld\n", count);

  return 0;
}