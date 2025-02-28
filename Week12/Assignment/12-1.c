#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum = 0;
    char input[20]; // 문자열 배열 선언

    for(i = 0; i < 5; i++) {
        fgets(input, sizeof(input), stdin); // 문자열 입력 받기

        // 입력된 문자열을 정수로 변환하여 출력하고, 합을 계산
        int num = atoi(input);
        if(num != 0 || input[0] == '0') { // atoi()가 0을 반환할 때도 정상적인 변환으로 가정
            sum += num;
        }
        else {
            i--; // 정수 아닌 값 입력 시 다시 입력 받기 위해 카운트 제거
        }
    }

    printf("모든 문자열의 정수 합 : %d\n", sum); // 출력

    return 0;
}