#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];

    fgets(input, sizeof(input), stdin); // 문자열 입력

    // 문자열 끝 개행 문자 제거
    if(input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0'; {

        }
    }
    
    int count = 0;

    // 공백 개수 세기
    for(int i = 0; input[i]; i++) {
        if(isspace(input[i])) {
            count++;
        }
    }

    printf("%d\n", count); // 출력

    return 0;
}