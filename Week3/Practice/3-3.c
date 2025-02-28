#include <stdio.h>

int main()
{
	double f, c;
  
  scanf("%lf", &f);
  c = (f - 32) * (5.0 / 9.0);
  
  printf("화씨 %.1f도는 섭씨 %.1f도 입니다.\n", f, c);

  return 0;
}