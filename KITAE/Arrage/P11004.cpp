#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int N, K;

	vector<long long> arr;

	cin >> N >> K;

	long long num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < K; i++) {
		if (i == (K - 1)) {
			cout << arr[i];
			break;
		}
	}
	/*cout << arr[K-1]; 도 됨*/

	system("pause");

	return 0;
}
