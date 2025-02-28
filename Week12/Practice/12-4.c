#include <stdio.h>

int myStrcmp(char s1[], char s2[]) {
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] > s2[i]) {
            return 1;
        }
		else if (s1[i] < s2[i]) {
            return -1;
        }
		else {
            i++;
        }
	}
	return 0;
}

int main() {
	char sen1[256];
	char sen2[256];

    scanf("%s", &sen1);
    scanf("%s", &sen2);

	printf("%d\n", myStrcmp(sen1, sen2));

    return 0;
}