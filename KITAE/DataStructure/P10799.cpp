#include <iostream>
#include <stack>
#include <cstring>
#include <algorithm>

using namespace std;

char operate[100001];

int steelpole(char *argv) {

	stack<char> s;
	int answer = 0;

	for (int i = 0; i < strlen(argv); i++) {
		if (argv[i] == '(')
			s.push('(');
		else {
			s.pop();
			if (argv[i - 1] == '(') {
				answer += s.size();
			}
			else
				answer++;
		}
	}
	return answer;
}

int main() {

	cin >> operate;

	cout << steelpole(operate) << endl;

	return 0;
}
