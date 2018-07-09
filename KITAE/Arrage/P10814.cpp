#define _CRT_SECURE_NO_WARNINGS
#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>

using namespace std;

class Person {
public :
	string name;
	int age;
	int num;
	Person(int age, string name, int num) {
		this->name = name;
		this->age = age;
		this->num = num;
	}
};

bool cmp(const Person &a, const Person &b) {
	if(a.age == b.age)
		return a.num < b.num;
	return a.age < b.age;
}

int main() {

	ios_base::sync_with_stdio(false);

	vector<Person> arr;
	int N, a;
	string name;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> name;
		arr.push_back(Person(a, name, i));
	}

	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].age << " " << arr[i].name << '\n';
	}

	system("pause");

	return 0;
}
