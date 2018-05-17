#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char arr1[8];
	char arr2[8];
	char arr3[8];
	char arr4[8];

	scanf("%s %s %s %s", arr1, arr2, arr3, arr4);

	strcat(arr1, arr2);
	strcat(arr3, arr4);

	printf("%ld", atol(arr1)+atol(arr3));

	getchar();
	getchar();

	return 0;
}
