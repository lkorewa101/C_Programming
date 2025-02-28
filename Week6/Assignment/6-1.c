#include <stdio.h>

int main() {
  int score[5];
  int total = 0;
  int max = -1;
  int min = 101;
  double mean;

  for (int i = 0; i<5; i++) {
    scanf("%d", &score[i]);

    while (score[i] < 0) {
      printf("잘못된 입력입니다.\n");
      scanf("%d", &score[i]);
    }

    if (score[i] > max) {
      max = score[i];
    }

    if (score[i] < min) {
      min = score[i];
    }

    total += score[i];
  }

  mean = (double)total / 5;
  printf("total = %d\n", total);
  printf("mean = %.2lf\n", mean);
  printf("max = %d\n", max);
  printf("min = %d\n", min);
  
  if (total < 350) {
    printf("불합격입니다.\n");
  } else {
    printf("합격입니다.\n");
  }


  return 0;
}