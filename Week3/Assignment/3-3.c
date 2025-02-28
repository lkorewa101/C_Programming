#include <stdio.h>

int main()
{
  int a, b, result; // 두 정수 a,b 와 결과 result 변수 선언
  scanf("%d %d", &a,&b); // int는 숫자이기에 &로 받아줌

  // b가 양수일땐 왼쪽 비트연산, b가 음수일땐 오른쪽 비트연산
  b >= 0 ? result = a << b : 0;
  b < 0 ? result = a >> (-b) : 0;
  
  // 비트 연산 결과 값을 10진수로 출력
  printf("%d\n", result);

  return 0;
}
