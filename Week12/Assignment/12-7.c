#include <stdio.h>

char* my_strcat(char* s1, char* s2) {
    char* result = s1; // 결과 문자열의 시작

    // s1 끝까지 이동
    while(*s1 != '\0') {
        s1++;
    }

    // s2 끝까지 이동
    while(*s2 != '\0') {
        *s1 = *s2; // s2를 s1 끝에 복사
        s1++;
        s2++;
    }

    // 결과 문자열 끝에 NULL 문자 추가
    *s1 = '\0';

    return result; // 결과 문자열 반환
}

int main() {
    char str1[50], str2[50];

    scanf("%s%s", str1, str2);

    my_strcat(str1, str2);

    // 출력
    printf("my_strcat 함수 결과 : %s\n", str1);

    return 0;
}