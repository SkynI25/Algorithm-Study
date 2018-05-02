#include <iostream>
#include <list>

using namespace std;

int main() {
	
	list<int> arr;

	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}
	
	list<int>::iterator it = arr.begin();

	cout << "<";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m-1; j++) {
			++it;
			if (it == arr.end())
				it = arr.begin();
		}
		cout << *it;
		it = arr.erase(it);
		if (it == arr.end())
			it = arr.begin();
		if (i != n - 1)
			cout << ", ";
	}
	cout << ">";

	return 0;
}
