#include <stdio.h>

int main() {
    int outputCount, newlineCount;
    scanf("%d %d", &outputCount, &newlineCount);

    for (int i = 1; i <= newlineCount; ++i) {
        if (i % 2 == 1) {
            for (int j = 1; j <= outputCount; ++j) {
                if (j % 2 == 1) {
                    printf("*");
                } else {
                    printf("/");
                }
            }
        } else {
            for (int j = 1; j <= outputCount; ++j) {
                if (j % 2 == 1) {
                    printf("/");
                } else {
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}