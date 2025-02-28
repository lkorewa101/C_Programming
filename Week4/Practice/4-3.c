#include <stdio.h>

int main()
{
  double kg, m, bmi;
  scanf("%lf %lf", &kg, &m);

  bmi = kg / (m * m);

  if(bmi >= 30.0)
  {
    printf("중증도비만\n");
  }
  else if(bmi >= 25.0)
  {
    printf("경도비만\n");
  }
  else if(bmi >= 23.0)
  {
    printf("과체중\n");
  }
  else if(bmi >= 18.5)
  {
  printf("정상\n");
  }
  else
  {
    printf("저체중\n");
  }

  return 0;
}