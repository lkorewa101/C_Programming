#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    int trans_ch;
    int count = 0;
    scanf("%s", &str);

    for(int i = 0; str[i]; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }

    while(str[count] != '\0') {
        trans_ch = __toascii(str[count]);
        printf("%d", trans_ch);
        count++;
    }

    return 0;
}