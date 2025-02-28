#include <stdio.h>

// a, b를 덧셈
int add(int a, int b) {
  return a + b;
}

// a, b중 큰 수에서 작은 수로 빼기
int subtract(int a, int b) {
  return (a > b) ? a - b : b - a;
}

// a, b를 곱셈
int multiply(int a, int b) {
  return a * b;
}

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2); // 수를 입력받음
  
  printf("%d %d %d\n", add(num1, num2), subtract(num1, num2), multiply(num1, num2)); // 결과값 출력

  return 0;
}