#include <stdio.h>

int main() {
    for (int num = 2; num <= 100; ++num) {
        int is_prime = 1;

        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }

    return 0;
}