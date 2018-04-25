## Deque

Deque란?

양쪽 끝에서 enqueue, dequeue가 가능한 구조. 즉 양쪽 끝에서 데이터를 넣고 삭제하는 작업이 가능하다.

<img src = https://github.com/SkynI25/Algorithm-Study/blob/master/KITAE/DataStructure/anod.png>

이동 큐를 이용해 구현한 Deque 구조 있지만 아래 코드가 제일 깔끔하여 원형 배열(circular array)을 이용해 구현함

```
#include <iostream>

#define MAX 100
using namespace std;

class Deque {
	int rear;
	int front;
	int size;
	int arr[MAX];

public :
	Deque(int size) {
		front = -1;
		rear = 0;
		this->size = size;
	}
	// Operations on Deque:
	void  insertfront(int key);
	void  insertrear(int key);
	void  deletefront();
	void  deleterear();
	bool  isFull();
	bool  isEmpty();
	int  getFront();
	int  getRear();
};

bool Deque::isFull(){
	return ((front == 0) && (rear == size - 1) || (front == rear+1));
}

bool Deque::isEmpty() {
	return front == -1;
}

void Deque::insertfront(int key) {
	if (isFull()) {
		cout << "Overflow\n" << endl;
		return;
	}

	if (front == -1) {
		front = 0;
		rear = 0;
	}

	else if (front == 0)
		front = size - 1;
	else
		front = front - 1;

	arr[front] = key;
}

void Deque::insertrear(int key) {
	if (isFull()) {
		cout << "Overflow\n" << endl;
		return;
	}

	if (front == -1) {
		front = 0;
		rear = 0;
	}

	else if (rear == size - 1)
		rear = 0;
	else
		rear = rear + 1;

	arr[rear] = key;
}

void Deque::deletefront() {
	if (isEmpty()) {
		cout << "Underflow\n" << endl;
		return;
	}

	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else
		if (front == size - 1)
			front = 0;
		else
			front = front + 1;
}

void Deque::deleterear() {
	if (isEmpty()) {
		cout << "Underflow\n" << endl;
		return;
	}

	if (front == rear) {
		front = -1;
		rear = -1;
	}

	else if (rear == 0)
		rear = size - 1;
	else
		rear = rear - 1;
}

int Deque::getFront() {
	if (isEmpty()) {
		cout << "Underflow\n" << endl;
		return -1;
	}
	return arr[front];
}

int Deque::getRear() {
	if (isEmpty() || rear < 0) {
		cout << "Underflow\n" << endl;
		return -1;
	}
	return arr[rear];
}
```

출처 : https://www.geeksforgeeks.org/implementation-deque-using-circular-array/
