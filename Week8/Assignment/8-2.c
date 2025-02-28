#include <stdio.h>

char calculateGrade(int score) {
  if (score >= 90 && score <= 100) {
    return 'A'; 
  } else if (score >= 80 && score <= 89) {
     return 'B';
  } else if (score >= 70 && score <= 79) {
     return 'C';
  } else if (score >= 60 && score <= 69) {
     return 'D';
  } else
     return 'F';
}

int main() {
  int score;
  scanf("%d", &score); // 점수를 입력받음

  char grade = calculateGrade(score); // 학점을 계산

  printf("%c\n", grade); // 결과값 출력

  return 0;
}