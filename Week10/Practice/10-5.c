#include <stdio.h>

int my_strlen(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);

	return i;
}

int main() {
	char str[100];
	
	gets(str);

	printf("Length : %d", my_strlen(str));

	return 0;
}