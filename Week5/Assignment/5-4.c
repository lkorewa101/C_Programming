#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 100; ++i) {
        if (i % 2 != 0 && i % 7 != 0 && i % 9 != 0) {
            for (int j = 0; j < 5; ++j) {
                printf("%d ", i);
                count++;
            }

            printf("\n");
        }
    }

    return 0;
}