#include <stdio.h>
// 1km = 0.621371마일(mile)
#define MILE 0.621371

int main()
{
	int ten = 40; // 40km
	int hundred = 400; // 400km

	// km 의 값을 mile 로 변환하여 출력
	printf("%dkm to mile : %f\n", ten, ten * MILE);
	printf("%dkm to mile : %f\n", hundred, hundred * MILE);

	return 0;
}