#include <iostream>
#include <string>

using namespace std;

int arr[26];

int main() {

	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		int temp = s[i] - 97;
		arr[temp] += 1;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
