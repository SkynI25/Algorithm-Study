#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

char str[81];
int main() {
	int test = 0;
	scanf("%d", &test);
	while (test--) {
		scanf("%s", str);
		int cnt = 0;
		int sum = 0;
		for(int i=0; str[i]; i++)
		{
			str[i] == 'O' ? sum += ++cnt : cnt = 0;
		}
		printf("%d\n", sum);
	}

	getchar();
	getchar();
	return 0;
}