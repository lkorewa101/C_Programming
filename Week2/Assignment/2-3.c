#include <stdio.h>
#include <math.h>

int main()
{
    int base = 4; // 직각삼각형의 밑면
    int hypotenuse = 5; // 직각삼각형의 빗변
  
    // 직각삼각형의 높이를 구하기 위해 피타고라스 정리 사용
    int height = sqrt(hypotenuse * hypotenuse - base * base);
  
    // 삼각형의 높이 값 출력
    printf("삼각형의 높이 : %d\n", height);
  
    return 0;
}