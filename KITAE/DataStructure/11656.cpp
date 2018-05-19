#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string s1;
	vector<string> s2;
	cin >> s1;

	for (int i = 0; i < s1.size(); ++i) {
		s2.push_back(s1.substr(i, s1.size()));
	}

	sort(s2.begin(), s2.end());

	for (string t : s2) {
		cout << t << endl;
	}

	return 0;
}
