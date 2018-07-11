#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    
	int N;
	long long a;
	int cnt = 1;
	int ans_cnt = 1;
	
	cin >> N;

	vector<long long> arr;

	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	long long ans = arr[0];

	for (int i = 1; i < N; i++) {
		if (arr[i] == arr[i - 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		if (ans_cnt < cnt) {
			ans_cnt = cnt;
			ans = arr[i];
		}
	}

	cout << ans;
	
	system("pause");

	return 0;
}
