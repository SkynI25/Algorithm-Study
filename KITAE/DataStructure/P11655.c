#include <stdio.h>
#include <string.h>

int main() {

	char str[101];

	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (isupper(str[i])) {
			if (str[i] + 13 > 90) {
				printf("%c", str[i] - 13);
			}
			else {
				printf("%c", str[i] + 13);
			}
		}

		else if (islower(str[i])) {
			if (str[i] + 13 > 122) {
				printf("%c", str[i] - 13);
			}
			else {
				printf("%c", str[i] + 13);
			}
		}

		else if (isdigit(str[i])) {
			printf("%c", str[i]);
		}

		else if (str[i] == ' ')
			printf("%c", str[i]);
	}
	return 0;
}
