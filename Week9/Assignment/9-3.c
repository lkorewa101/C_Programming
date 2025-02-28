#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

  // 동적 할당
    int *grades = (int*)malloc(n * sizeof(int));
  
  // 성적 입력 받기
    for (int i = 0; i < n; ++i) {
        scanf("%d", &grades[i]);
    }

  // 성적 평균 계산
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += grades[i];
    }
    double average = sum / n;

  // 평균 출력
    printf("%.2f\n", average);

  // 메모리 해제
    free(grades);
  
    return 0;
}