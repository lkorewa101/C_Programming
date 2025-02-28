#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);
    printf("\n");

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = height; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = height; i >= 1; --i) {
        for (int j = 1; j <= height - i; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}