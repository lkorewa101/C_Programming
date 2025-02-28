#include <stdio.h>
#include <string.h>

int main() {
	char str1[30], str2[30], str3[30];

	char strSum[91] = { 0 };
	
	gets(str1);
	gets(str2);
	gets(str3);
	
	strcat(strSum, str1);
	strcat(strSum, str2);
	strcat(strSum, str3);

	printf("Merged string length : %lu\n", strlen(strSum));
	printf("Merged string : %s", strSum);

	return 0;
}