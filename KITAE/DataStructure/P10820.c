#include <stdio.h>
#include <string.h>

int main() {

	char str[101];

	while(fgets(str, 102, stdin) != NULL) {
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;

		for (int i = 0; i < strlen(str); i++) {
			if (islower(str[i])) {
				a++;
			}
			if (isupper(str[i])) {
				b++;
			}
			if (isdigit(str[i])) {
				c++;
			}
			if (str[i] == ' ') {
				d++;
			}
		}
		printf("%d %d %d %d\n", a, b, c, d);
	}

	return 0;
}
