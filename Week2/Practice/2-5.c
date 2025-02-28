#include <stdio.h>
#define PI 3.141592
int main() {
	const double radius= 15;
	double circumference;
	circumference = radius * radius * PI;
	printf("반지름 %.1f인 피자의 넓이는 %.1f입니다.\n", radius, circumference);
	printf("1인당 %.1f 크기의 피자를 먹을 수 있습니다.\n", circumference / 5);
	return 0;
}