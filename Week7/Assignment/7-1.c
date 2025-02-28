#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size];
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < size; ++i) {
        sum += *(ptr + i);
    }
    printf("%d\n", sum);

    return 0;
}