#include <iostream>
#include <cstdio>
#include <string.h>
#include <Windows.h>
#define MAX 10001
using namespace std;

int queue[MAX];
int FRONT = 0;
int BACK = 0;
int Size = 0;

void push(int i) {
	Size++;
	queue[BACK] = i;
	BACK = ++BACK % MAX;
}

int empty() {
	if (FRONT == BACK)
		return 1;
	else
		return 0;
}

int pop() {
	if (empty() == 1)
		return -1;

	int i = queue[FRONT];
	Size--;
	FRONT = ++FRONT % MAX;
	return i;
}


int front() {
	if (empty()== 1)
		return -1;
	else
		return queue[FRONT];
}

int back() {
	if (empty()== 1)
		return -1;
	else
		return queue[(BACK-1)%MAX];
}

int size() {
	return Size;
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
		else if (strcmp(operate, "front") == 0)
			cout << front() << endl;
		else if (strcmp(operate, "back") == 0)
			cout << back() << endl;
	}

	system("pause");
	return 0;
}
