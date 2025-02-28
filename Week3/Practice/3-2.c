#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);
	
	a = a % 2;
	
	printf("%s", a > 0 ? "홀수" : "짝수");

	return 0;
}