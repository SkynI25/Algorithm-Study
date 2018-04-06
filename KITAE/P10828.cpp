#include <iostream>
#include <cstdio>
#include <string.h>
#include <Windows.h>
#define MAX 10001
using namespace std;

int stack[MAX];
int TOP = 0;

// 수정된 부분
// 배운 것에선 stack[++TOP] = i 였음 이때는 TOP = -1 가정했음
// 여기선 후위증감연산자를 사용해야함..
// 문제에서 TOP = 0 부터 시작하고 0일때가 비어있는 경우이기 때문
void push(int i) {
	stack[TOP] = i;
	TOP++;
}

int empty() {
	if (TOP == 0)
		return 1;
	else
		return 0;
}

// push 에서 TOP++ 를 했으므로 pop 이전 push 때
// TOP 인덱스가 1이 증가됨. 그러므로 한 칸뒤의 인덱스를 써야지
// 알맞은 값이 반환됨.
int pop() {
	if (TOP == 0)
		return -1;

	int temp = TOP - 1;
	TOP--;
	return stack[temp];
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

	system("pause");
	return 0;
}
