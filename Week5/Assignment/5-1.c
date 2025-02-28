#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 2; j <= 9; ++j) {
            printf("%d x %d = %d", j, i, i * j);
            if (j < 9) {
                printf("\t");
            }
            else {
                printf("\n");
            }
        }
    }

    return 0;
}