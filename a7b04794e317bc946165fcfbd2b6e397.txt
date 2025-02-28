#include <stdio.h>
#include <math.h>

int main()
{
  double dollarWonExchangeRate, dollar, won;

  scanf("%lf %lf", &dollarWonExchangeRate, &dollar);
  
  won = dollar * dollarWonExchangeRate;
  
  printf("%.2f달러는 %.0f원 입니다.\n", dollar, floor(won));
  
  return 0;
}