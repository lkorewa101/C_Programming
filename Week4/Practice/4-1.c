#include <stdio.h>

int main()
{
  int a, b;
  int tmp = 0;
  scanf("%d %d", &a, &b);
  if (a < b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  
  printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n", a, b);
  
  return 0;
}