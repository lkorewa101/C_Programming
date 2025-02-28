#include <stdio.h>
#include <math.h>

int main()
{
	double KRW = 10000000; // 1000만원

	// 달러,엔으로 계산 후, floor 함수를 사용하여 소수점 아래 값을 버리고 출력
	printf("%.f 달러\n", floor(KRW / 1120));
	printf("%.f 엔\n", floor(KRW / 11.21));

	return 0;
}