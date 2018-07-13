#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n, num;

	cin >> n;

	vector<pair<int, int>> a(n);

	for (int k = 0; k < n; k++) {
		cin >> num;
		a[k].first = num;
		a[k].second = k;
	}

	sort(a.begin(), a.end());

	int ans = a[0].second;

	for (int i = 0; i < n; i++) {
		if (ans < a[i].second-i)
			ans = a[i].second-i;
	}

	cout << ans+1 << '\n';


	system("pause");

	return 0;
}
