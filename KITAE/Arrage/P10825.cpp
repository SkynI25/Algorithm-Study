#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Person {
public :
	string name;
	int num1;
	int num2;
	int num3;
	Person(string name, int num1, int num2, int num3) {
		this->name = name;
		this->num1 = num1;
		this->num2 = num2;
		this->num3 = num3;
	}
};

bool cmp(const Person &a, const Person &b) {
	if (a.num1 == b.num1 && a.num2 == b.num2 && a.num3 == b.num3)
		return a.name < b.name;
	else if (a.num1 == b.num1 && a.num2 == b.num2)
		return a.num3 > b.num3;
	else if (a.num1 == b.num1)
		return a.num2 < b.num2;
	return a.num1 > b.num1;
}

int main() {

	ios_base::sync_with_stdio(false);

	vector<Person> arr;

	int N, b, c, d;

	string a;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> b >> c >> d;
		arr.push_back(Person(a, b, c, d));
	}

	sort(arr.begin(), arr.end(), cmp);

	for (auto obj : arr)
		cout << obj.name << '\n';

	return 0;
}
