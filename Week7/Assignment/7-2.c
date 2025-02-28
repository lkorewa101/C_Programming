#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int *ptr1, *ptr2, *ptr3, *ptr4;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;
    ptr4 = &num4;

    printf("%d\n", *ptr1 + *ptr2);
    printf("%d\n", *ptr1 + *ptr2 - *ptr3);
    printf("%d\n", (*ptr1 + *ptr2 - *ptr3) * *ptr4);

    return 0;
}