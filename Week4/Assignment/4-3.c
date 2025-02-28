#include <stdio.h>

int main()
{
  double won = 1152;
  double doller = 0.00087;
  double mymoney;
  char money;
  scanf("%lf %c", &mymoney, &money);
  switch(money)
    {
      case 'w':
      printf("%lf달러", mymoney * doller);
      break;
      case 'd':
      printf("%.lf원", mymoney * won);
      break;
    }

  return 0;
}
