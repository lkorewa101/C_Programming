#include <stdio.h>

int main()
{
  int a, b; // 수를 입력 받을 a,b int 변수 선언
  char op; // 문자를 입력 받을 op 변수 선언
  scanf("%d %c %d", &a, &op, &b); // scanf로 숫자 문자 숫자를 받음
  
  // 조건 연산자의 결합법칙 순서는 ←(오른쪽에서 왼쪽) 이므로, 수식을 오른쪽에 배치 나누기를 제외한 조건의 거짓 연산식에는 0를 넣음.
  op=='+' ? printf("%d %c %d = %d\n", a, op, b, a+b): 0; // 문자에 +가 포함될 시, 더하기 연산 시행 후, 연산식과 결과 값 출력
  op=='-' ? printf("%d %c %d = %d\n", a, op, b, a-b): 0; // 문자에 -가 포함될 시, 빼기 연산 시행 후, 연산식과 결과 값 출력
  op=='*' ? printf("%d %c %d = %d\n", a, op, b, a*b): 0; // 문자에 *가 포함될 시, 곱셈 연산 시행 후, 연산식과 결과 값 출력
  
  // 나누기는 b가 0일 시 'can not divide by 0'이란 문자를 출력하고, 0이 아닐 시 나누기 연산 시행 후, 연산식과 결과 값 출력
  op=='/' ? (b==0 ? printf("can not divide by 0\n") : printf("%d %c %d = %lf\n", a, op, b, a/b)): 0;
  
  return 0;
}