#include <stdio.h>

int main() {
  int number = 0;

  loop:
  printf("Hello World!!!\n");
  if (++number < 10) goto loop;

  return 0;
}