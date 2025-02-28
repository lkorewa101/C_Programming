#include <stdio.h>

void convertSeconds(int seconds) {
  int hours, minutes, remainingSeconds;

  hours = seconds / 3600; // 시 부 계산
  remainingSeconds = seconds % 3600; // 계산 후 나머지 초 저장
  minutes = remainingSeconds / 60; // 분 부 계산
  remainingSeconds = remainingSeconds % 60; // 계산 후 나머지 초 저장

  if (hours > 0) {
    printf("%d시간 ", hours); // 시 부에 값이 있으면 시 출력
  }
  if (minutes > 0) {
    printf("%d분 ", minutes); // 분 부에 값이 있으면 분 출력
  }
  if (remainingSeconds > 0) { // 초 부에 값이 있으면 초 출력
    printf("%d초 ", remainingSeconds);
  }
  printf("\n"); 
}

int main() {
  int seconds;
  scanf("%d", &seconds); // 초 입력부

  convertSeconds(seconds); // 출력부 (함수에서 출력함)

  return 0;
}
