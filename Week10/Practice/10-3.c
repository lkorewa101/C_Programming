#include <stdio.h>
#include <ctype.h>

int main() {
	char input[81];
	int count[26] = { 0 };
	fgets(input, sizeof(input), stdin);

	for (int i = 0; input[i] != '\0'; i++) {
		if (isalpha(input[i])) {
			char c = tolower(input[i]);
			count[c - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (count[i] > 0) {
			printf("%c : %d\n", 'A' + i, count[i]);
		}
	}

	return 0;
}
