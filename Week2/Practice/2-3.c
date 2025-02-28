/* 정수형과 문자형으로 사용하는 char형 예제 */
#include <stdio.h>
int main() {
	char ch = 'A';
	printf("%c의 아스키 값은 %d이다.\n", ch+10, ch+10);
	printf("%c의 아스키 값은 %d이다.\n", ch+25, ch+25);
	return 0;
}