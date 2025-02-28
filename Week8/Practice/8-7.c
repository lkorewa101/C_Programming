#include <stdio.h>

int recursiveSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + recursiveSum(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
    } else {
        int sum = recursiveSum(n);
        printf("%d\n", sum);
    }

    return 0;
}