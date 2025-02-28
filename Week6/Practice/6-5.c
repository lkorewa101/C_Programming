#include <stdio.h>

int main() {
    int MAT1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int MAT2[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int MAT3[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = MAT1[i][j] + MAT2[i][j] + MAT3[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d", result[i][j]);
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}