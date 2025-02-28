#include <stdio.h>
#include <string.h>

void reverseString(char* s);


int main(void) {
    char s[100];
    gets(s);
    
    reverseString(s);

    printf("%s\n", s);

    return 0;
}




void reverseString(char* s) {
    size_t size = strlen(s);
    char temp;

    for (size_t i = 0; i < size / 2; i++) {
        temp = s[i];
        s[i] = s[(size - 1) - i];
        s[(size - 1) - i] = temp;
    }
}