#include <stdio.h>

int main() {
    int year, month, day, totalDays, currentDay;

    printf("년도를 입력하세요: ");
    scanf("%d", &year);

    // 해당 년도의 1월 1일이 무슨 요일인지 계산 (0: 일요일, 1: 월요일, ..., 6: 토요일)
    currentDay = (year + year / 4 - year / 100 + year / 400) % 7;

    // 각 달의 일수를 배열로 저장
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 윤년인 경우 2월의 일수를 29일로 변경
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[2] = 29;
    }

    // 12월까지 출력
    for (month = 1; month <= 12; month++) {
        printf("%d월\n", month);
        printf("SUN     MON     TUS     WED     THU     FRI     SAT\n");
        printf("===================================================\n");

        // 첫째 날까지 빈 칸 출력
        for (day = 0; day < currentDay; day++) {
            printf("        ");
        }

        // 해당 달의 날짜 출력
        totalDays = daysInMonth[month];
        for (day = 1; day <= totalDays; day++) {
            printf("%-8d", day);
            currentDay++;
            // 토요일까지 출력하고 다음 줄로 이동
            if (currentDay % 7 == 0) {
                printf("\n");
            }
        }

        // 다음 달을 위해 마지막 날짜 이후의 빈 칸 출력
        while (currentDay % 7 != 0) {
            printf("        ");
            currentDay++;
        }

        // 줄 바꿈
        printf("\n\n");

        // 다음 달을 위해 첫째 날로 설정
        currentDay = (currentDay + totalDays) % 7;
    }

    return 0;
}