#include <stdio.h>
#include <ctype.h>

int main() {
    // 문자열 변수 선언
    char inputString[201];

    // 대문자와 소문자의 개수를 저장할 배열
    int uppercaseCount[26] = {0};  // 대문자 알파벳
    int lowercaseCount[26] = {0};  // 소문자 알파벳

    // 사용자로부터 문자열 입력 
    fgets(inputString, sizeof(inputString), stdin);

    // 입력 문자열의 대소문자의 개수 세기
    for (int i = 0; inputString[i] != '\0'; i++) {
        char currentChar = inputString[i];

        // 알파벳인지 확인
        if (isalpha(currentChar)) {
            // 대문자 카운트
            if (isupper(currentChar)) {
                uppercaseCount[currentChar - 'A']++;
            }
            // 소문자 카운트
            else if (islower(currentChar)) {
                lowercaseCount[currentChar - 'a']++;
            }
        }
    }

    // 결과 출력
    printf("<전체 알파벳의 개수>\n");

    // 대문자 출력
    for (int i = 0; i < 26; i++) {
        if (uppercaseCount[i] > 0) {
            printf("%c : %d\n", 'A' + i, uppercaseCount[i]);
        }
    }

    // 소문자 출력
    for (int i = 0; i < 26; i++) {
        if (lowercaseCount[i] > 0) {
            printf("%c : %d\n", 'a' + i, lowercaseCount[i]);
        }
    }

    return 0;
}