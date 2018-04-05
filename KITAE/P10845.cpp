#include <iostream>
#include <cstdio>
#include <string.h>
#define MAX 10001
using namespace std;

int stack[MAX];
int TOP = 0;

void push(int i) {
	stack[++TOP] = i;
}

int empty() {
	if (TOP == 0)
		return 1;
	else
		return 0;
}

int pop() {
	if (empty() == 1)
		return -1;

	return stack[TOP--];
}


int top() {
	if (TOP == 0)
		return -1;
	else
		return stack[TOP];
}

int size() {
	return TOP;
}

int main() {

	int n;
	char operate[10];

	cin >> n;

	for (int i = 0; i < n; i++) {
		int value;
		cin >> operate;

		if (strcmp(operate, "push") == 0) {
			cin >> value;
			push(value);
		}
		else if (strcmp(operate, "size") == 0)
			cout << size() << endl;
		else if (strcmp(operate, "pop") == 0)
			cout << pop() << endl;
		else if (strcmp(operate, "empty") == 0)
			cout << empty() << endl;
		else if (strcmp(operate, "top") == 0)
			cout << top() << endl;
	}

	return 0;
}
