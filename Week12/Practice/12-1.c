#include<stdio.h>

int main() {
   int num1,num2,num3;
   int num4, num5, num6;
   int strike=0, ball=0;
   printf("숫자야구의 정답을 입력하세요 : ");
   scanf("%d %d %d", &num1, &num2, &num3);
   for (int i = 1; i <= 7; i++) {
      printf("\n[%d회차]\n", i);
      printf("0부터 9까지 숫자를 3개 입력 : ");
      scanf("%d %d %d",&num4,&num5,&num6);
      if (num4 == num1) {
         strike++;
         
      }
      else if (num1 != num4 && num1 == num5) {
         ball++;
         
      }
      else if (num1 != num4 && num1 == num6) {
         ball++;
         
      }
      if (num2 == num5) {
         strike++;
         
      }
      else if (num2 != num5 && num2 == num4) {
         ball++;
         
      }
      else if (num2 != num5 && num2 == num6) {
         ball++;
         
      }
      if (num3 == num6) {
         strike++;
         
      }
      else if (num3 != num6 && num3 == num4) {
         ball++;
         
      }
      else if (num3 != num6 && num3 == num5) {
         ball++;
         
      }
      printf("[결과]스트라이크 : %d, 볼 : %d\n", strike, ball);
      if (strike == 3) {
         printf("\n사용자가 승리하였습니다.");
         return 0;
      }
      strike = 0;
      ball = 0;
      if (i == 7) {
         printf("\n컴퓨터가 승리하였습니다.");
      }
   }
   
}