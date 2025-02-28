#include <stdio.h>

int main() {
    int students = 3;
    int subjects = 3;
    int i, j, total;
    int scores[students][subjects];

    for (i = 0; i < students; i++) {
        for (j = 0; j < subjects; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (i = 0; i < students; i++) {
        total = 0;
        for (j = 0; j < subjects; j++) {
            total += scores[i][j];
        }
        double avg = (double)total / subjects;

        printf("Student %d : total %d, avg %.1f, %s\n", i + 1, total, avg, (total >= 240) ? "Pass" : "Fail");
    }

    return 0;
}