#include <stdio.h>
char* my_strchr(const char* str, int ch) {
	while (*str != '\0') {
		if (*str == ch) {
			return (char*)str;
		}
		str++;
	}
	return NULL;
}

int main() {
	char inputString[100];
	char searchChar;
	fgets(inputString, sizeof(inputString), stdin);
	scanf("%c", &searchChar);
	char* foundChar = my_strchr(inputString, searchChar);
	while (foundChar != NULL) {
		printf("%c ", *foundChar);
		foundChar = my_strchr(foundChar + 1, searchChar);
	}

	return 0;
}