#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

  // 행, 열 입력 받기
    scanf("%d %d", &n, &m);

  // 동적으로 2차원 배열 할당
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        matrix[i] = (int *)malloc(m * sizeof(int));
    }

  // 행렬 입력 받기
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

  // 행렬 평균 계산
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum += matrix[i][j];
        }
    }
    int average = sum / (n * m);
  
  printf("\n");


  // 평균 이상 원소 있는지 확인
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] >= average) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

  // 메모리 해제
    for (int i = 0; i < n; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}