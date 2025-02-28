#include <stdio.h>
int subtract(int a, int b) {
  if(a < b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  return a-b;
}
int main(void) {
  int n1, n2;
    printf("Enter two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("Subtraction result : %d\n", subtract(n1, n2));	
  return 0;
}