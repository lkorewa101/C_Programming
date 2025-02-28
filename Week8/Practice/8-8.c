#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
    } else {
        int result = fibonacci(n);
        printf("%d\n", result);
    }

    return 0;
}