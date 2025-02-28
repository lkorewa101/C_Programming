#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int count = 0;
    char input;


    while (1) {
        scanf(" %c", &input);

        if (!islower(input)) {
            break;
        }

        text[count] = input;
        count++;

        if (count >= 100) {
            return 1;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (text[i] > text[j]) {
                char temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%c\n", text[i]);
    }

    return 0;
}