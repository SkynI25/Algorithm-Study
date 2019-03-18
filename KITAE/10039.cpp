#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {

	int	appClass[5];
	int sum = 0;

	for (int i = 0; i < (sizeof(appClass) / sizeof(int)); i++) {
		scanf("%d", &appClass[i]);
		if (appClass[i] < 40) {
			appClass[i] = 40;
		}
		sum += appClass[i];
	}

	printf("%d", sum / (sizeof(appClass) / sizeof(int)));

	getchar();
	getchar();

	return 0;
}