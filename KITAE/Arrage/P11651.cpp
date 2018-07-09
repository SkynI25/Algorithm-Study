#define _CRT_SECURE_NO_WARNINGS
#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	vector<pair<int, int>> arr;
	int N, a, b;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(b, a));
	}

	sort(arr.begin(), arr.end());

	for (auto obj : arr) {
		cout << obj.second << " " << obj.first << '\n';
	}

	system("pause");

	return 0;
}
