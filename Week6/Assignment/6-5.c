#include <stdio.h>
#include <ctype.h>

int main() {
    int counts[26] = {0};
    
    char ch;

    while (1) {
        ch = getchar();

        if (!isalpha(ch)) {
            break;
        }

        if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, counts[i]);
        }
    }
    
    return 0;
}