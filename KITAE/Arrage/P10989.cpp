#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {

	int arr[10001] = { 0, };
	int N, a;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &a);
		arr[a]++;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 1; j <= arr[i]; j++)
			printf("%d\n", i);
	}

	system("pause");

	return 0;
}
