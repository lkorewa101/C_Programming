#include <stdio.h>

int main()
{
  int seokjinMoney, payment;
  scanf("%d %d", &seokjinMoney, &payment);

  if(seokjinMoney < payment)
  {
      printf("돈이 부족합니다.\n");
      return 0;
  }

  int change = seokjinMoney - payment;

  printf("50000원 : %d개\n", change / 50000);
  change %= 50000;

  printf("10000원 : %d개\n", change / 10000);
  change %= 10000;

  printf("1000원 : %d개\n", change / 1000);
  change %= 1000;

  printf("100원 : %d개\n", change / 100);
  change %= 100;

  printf("10원 : %d개\n", change / 10);
  change %= 10;
  
  return 0;
}