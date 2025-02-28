#include <stdio.h>

int main() {
    int counts[10] = {0};
    int num;

    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }

        if (num >= 10 && num <= 99) {
            int firstDigit = num / 10;
            int secondDigit = num % 10;
            counts[firstDigit]++;
            counts[secondDigit]++;
        } else if (num >= 0 && num <= 9) {
            counts[num]++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d : %d\n", i, counts[i]);
    }
    
    return 0;
}