#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int test = 0;
	scanf("%d", &test);
	string str = "";

	while (test > 0) {
		cin >> str;
		int cnt = 0;
		for(char ch : str)
		{
			if (str.find("O") != string::npos) cnt++;
			else cnt = 0;
		}
		printf("%d\n", cnt);
		test--;
	}

	getchar();
	return 0;
}