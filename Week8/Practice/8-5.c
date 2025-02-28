#include <stdio.h>

void printArray(int array[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
}

void sortArray(int array[], int len) {
    int i, j, tmp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int score[] = { 99, 84, 91, 78, 89 };
    int array_length = sizeof(score) / sizeof(score[0]);
    sortArray(score, array_length);
    printArray(score, array_length);
    return 0;
}