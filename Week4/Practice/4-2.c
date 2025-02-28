#include <stdio.h>

int main()
{
  int score;
  scanf("%d", &score);

  if (score >= 70)
  {
    printf("합격\n");
  }
  else
  {
    printf("불합격\n");
  }
  return 0;
}