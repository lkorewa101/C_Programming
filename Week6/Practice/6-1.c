#include <stdio.h>

int main() {
    char text[20];
    int i = 0;
    char input;

    while (i < 20) {
        scanf(" %c", &input);

        if (input == '.' || input == '\n') {
            break;
        }

        text[i] = input;
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%c", text[j]);
    }

    return 0;
}