#include <stdio.h>

int prime(int num) {
    for (int i = 2; i <= num; i++) {
        int j;
        int is_prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    prime(num);
    return 0;
}