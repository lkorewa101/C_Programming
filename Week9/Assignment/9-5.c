#include <stdio.h>
#include <stdlib.h>

// 행열 
void matrixMultiplication(int **matrix1, int **matrix2, int **result, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n); // 행열 크기 입력

  
  // 다양한 행열 크기 대응을 위해 동적으로 2차원 배열 할당
    int **matrix1 = (int **)malloc(n * sizeof(int *));
    int **matrix2 = (int **)malloc(n * sizeof(int *));
    int **result = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; ++i) {
        matrix1[i] = (int *)malloc(n * sizeof(int));
        matrix2[i] = (int *)malloc(n * sizeof(int));
        result[i] = (int *)malloc(n * sizeof(int));
    }

  // 첫번째 행열 입력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

  // 두번째 행열 입력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

  // 행열 곱 계산
    matrixMultiplication(matrix1, matrix2, result, n);

  // 결과
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

  // 메모리 해제
    for (int i = 0; i < n; ++i) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}