#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		int temp = s[i] - 97;
		if (arr[temp] == -1)
			arr[temp] = i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}
  
	return 0;
}
