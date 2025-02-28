#include <stdio.h>
// 원주율을 3.14로 정의함
#define PI 3.14

int main()
{
	double radius = 3.58; // 원의 반지름 3.58
	double area = radius * radius * PI; // 원의 면적을 구해 변수에 저장
	double circumference = 2 * radius * PI; // 원의 둘레를 구해 변수에 저장

	// 구한 원의 면적, 원의 둘레 값을 출력
	printf("원의 면적 : %F\n", area);
	printf("원의 둘레 : %f\n", circumference);

	return 0;
}