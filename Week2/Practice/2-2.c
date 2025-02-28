/* 자신이 반에서 상위 몇%인지 계산하는 프로그램 */
#include <stdio.h>
int main() {
	double rank, noOfStudents;
	rank = 5;
	noOfStudents = 75;
	printf("당신은 상위 %.2f%%입니다.\n", rank / noOfStudents * 100);
	return 0;
}