void func(int x) {
    int guess;

    while (1) {
        printf("이 정수를 맞추어 보세요 >> ");
        scanf("%d", &guess);

        if (guess < x) {
            printf("\n맞추어야 할 정수가 입력한 %d 보다 큽니다.\n", guess);
        } else if (guess > x) {
            printf("\n맞추어야 할 정수가 입력한 %d 보다 작습니다.\n", guess);
        } else {
            printf("\n축하합니다! 정답은 %d 입니다.\n", x);
            break;
        }
    }
}