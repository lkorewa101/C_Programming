#include <stdio.h>

int main()
{
  double x,y;
  scanf("%lf %lf", &x, &y);

  if(x > 0 && y > 0)
  {
    printf("%lf", x + y);
  }
  else if(x > 0 && y <= 0)
  {
    printf("%lf", x - y);
  }
  else if(x <= 0 && y > 0)
  {
    printf("%lf", (-x) + y);
  }
  else
  {
   printf("%lf", (-x) - y); 
  }

  return 0;
}