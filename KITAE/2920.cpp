#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {

	int scale[8];
	int asc = 0;
	int desc = 0;

	for (int i = 0; i < (sizeof(scale) / sizeof(int)); i++) {
		scanf("%d", &scale[i]);
	}

	for (int i = 0; i < (sizeof(scale) / sizeof(int)) - 1; i++) {
		if (scale[i] < scale[i + 1]) {
			asc += 1;
		}
		if (scale[i] > scale[i + 1]) {
			desc += 1;
		}
	}

	if (desc == 7) {
		printf("descending");
	}
	if (asc == 7) {
		printf("ascending");
	}
	if ((desc > 0 && desc < 7) || (asc > 0 && asc < 7)) {
		printf("mixed");
	}

	getchar();
	getchar();

	return 0;
}