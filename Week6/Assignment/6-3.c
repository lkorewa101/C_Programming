#include <stdio.h>

int main() {
    int matrix1[2][3] = {{9, 2, 7}, {4, 5, 6}};
    int matrix2[3][2] = {{2, 13}, {5, 10}, {2, 11}};
    int result[2][2] = {0};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d", result[i][j]);
            if (j < 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}