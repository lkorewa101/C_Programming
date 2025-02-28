#include <stdio.h>

int countDivisors(int n) {
  int count = 0; // 약수 개수 초기화
  for (int i = 1; i <= n; i++) { // 1부터 입력받은 정수까지 반복
      if (n % i == 0) { // 정수가 증가값으로 나누어 떨어진다면 약수로 판단
        count++; // 약수 개수 증가
    }
  }
  return count; 
}

int main() {
  int n;
  scanf("%d", &n); // 정수 입력부

  int result = countDivisors(n); // result 변수에 계산 값 저장
  printf("%d\n", result); // 결과 출력부

  return 0;
}