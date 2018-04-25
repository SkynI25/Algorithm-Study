## stack

stack 이란?

자료구조의 일종. 먼저 들어간 데이터가 나중에 나오는 구조. 즉 나중에 삽입된 자료가 가장 먼저 삭제되는 구조.

스택의 주요 함수

- boolean isEmpty() : 비어있는지 없는지, 비어있다면 true, 아니면 false

- void push(Data data) : 스택에 매개변수로 전달된 data 저장

- Data pop() : 마지막에 저장된 요소를 삭제, 삭제된 데이터는 반환이 됨(본 함수의 호출을 위해 데이터가 하나 이상 존재함이 보장)

- Data peek() : 마지막에 저장된 요소를 반환하되 삭제하지 않는다(본 함수의 호출을 위해 데이터가 하나 이상 존재함이 보장)


stack 의 주요 함수들을 코드로 옮겨본 것, 배열로 구성하였음

```
int push(int n) {

// top = -1, MAX는 배열의 최대 크기
if(top >= MAX -1) {

print("Overflow");
return -1;

stack[++top] = val;

return val;

}

int pop() {

if(top < 0) {

print("Underflow");
return -1;

return stack[top--];

}
```



## queue

queue란?

먼저 들어간 데이터가 먼저 나오는 구조(FIFO)

queue의 주요 함수

- boolean isEmpy() : 큐가 빈 경우(true)와 그렇지 않은 경우(false)를 반환한다.

- void enqueue(Data data) : 큐에 매개변수로 전달된 data를 저장한다.

- Data dequeue() : 마지막에 저장된 요소를 삭제한다. 또한 삭제딘 데이터는 반환이 된다(단, 본 함수의 호출을 위해 데이터가 하나 이상 존재함이 보장되어야 한다)

- Data peek() : 마지막에 저장된 요소를 반환하되 삭제하지 않는다(단, 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다)

아래는 큐의 주요 함수를 코드로 구현한 것

```
// front = -1, rear = -1, MAX는 큐의 크기
int enqueue(int val) {

if(rear >= MAX -1) { // 배열의 크기를 넘어설 때

print("Overflow");
return -1;

}

queue[++rear] = val; // 선위증감연산자 사용하여 값 대입

}

int dequeue() {

if(front <= 0) { // 0보다 작은 값일 때

print("Overflow");
return -1;

return queue[front++]; // 후위증감연산자 사용하여 값 반환

}
```

위의 코드는 계속 증가하기만 하고 감소가 되지 않아 enqueue 작업을 하다 배열 크기를 넘어설때 Overflow 에러를 발생시킬 수 있다.

이를 보완하기 위해 큐의 데이터를 배열의 앞부분으로 옮겨주는 작업을 해줄 필요가 있다. 허나 이는 수많은 데이터(5억개 이상)일 때는 비효율적이다.

더 나은 자료형으로 원형큐가 있다.

원형큐에서 front 는 맨 처음 자료를 가리키고 rear는 맨 끝 자료의 다음 자리를 가리킨다.

rear 가 맨 끝 자료의 다음 자리를 가리키는 것을 통해 꽉 찼을 때와 비어있는 경우를 구분할 수 있다.

원형큐에서 front == rear 는 큐가 비어있다는 것을 가리키며 (rear+1)%MAX == front 는 꽉 찬 것을 의미한다.

```
int enqueue(int val) { 

    if ((rear+1) % MAXSIZE == front) {    // 큐가 꽉 찼는지 확인

        printf ("    Queue Overflow.");

        return -1;

    }

    queue[rear] = val;                         // rear가 큐의 끝 다음의 빈공간이므로 바로 저장

    rear = ++ rear % MAXSIZE;             // rear를 다음 빈공간으로 변경, 큐의 크기만큼 나누어 주므로 Overflow될 염려가 줄어듬

    return val;

} 

 

int dequeue(void) {

    int i;

    if (front == rear) {    // 큐가 비어 있는지 확인

        printf ("    Queue Underflow.");

        return (-1);

    }

    i = queue[front];    // front의 값을 가져옴

    front = ++front%MAXSIZE;   // front를 다음 데이터 요소로

    return i;

}

```

참고 :

https://blog.naver.com/keloc/40153556226

https://m.blog.naver.com/justkukaro/220396525483


## linked list

linked list 란?

데이터가 담긴 노드(메모리 공간)를 일렬로 연결해놓았다고 해서 연결리스트라고 부름

>링크 : 노드 간의 위치정보를 저장하고 있어 연결리스트의 순서를 유지할 수 있도록 하는 연결고리

>노드 : 실제 정보를 담고 있는 하나의 단위

노드 구조

```
struct node {

int key;
struct node *next; // next에는 node 구조체로 만든 다른 노드의 메모리를 저장

}
```

노드를 추가하는 규칙

1. 노드에 메모리 할당

2. next 멤버에 다음노드의 메모리 주소 저장

3. data 멤버에 데이터를 저장

4. 마지막 노드라면 next 멤버에 NULL 저장

```
void addFirst(struct node *target, int data) { // 기준 노드 뒤에 노드를 추가하는 함수

struct node *newNode = malloc(sizeof(struct node)); // 새 노드 생성
newNode -> next = target -> next; // 새 노드의 다음 노드를 기준 노드의 다음 노드로 지정
newNode -> data = data; // 데이터 저장
target -> next = newNode; // 기준 노드의 다음 노드를 새 노드를 지정

}
```

그림으로 보면 쉽다. 원래 기준 노드가 가리키고 있던 것을 새로운 노드가 가로채고

기준 노드가 새 노드를 가리키게 함으로서 새로운 연결을 만드는 것.

<img src=https://github.com/SkynI25/Algorithm-Study/blob/master/KITAE/DataStructure/%EC%9D%B4%EB%AF%B8%EC%A7%80%202.png width = 600 height = 400>


```
void removeFirst(struct node *target) { // 기준 노드의 다음 노드를 삭제하는 함수

struct node *removeNode = target -> next; // 기준 노드의 다음 노드 주소를 저장
target -> next = removeNode -> next; // 기준 노드의 다음 노드에 삭제할 노드의 다음 노드를 지정

free(removeNode); // 노드 메모리 해제
```

주석으로 설명한 것만으론 난해할 수 있다.
정리하자면 이 함수는 기준 노드의 다음 노드를 삭제해주는 구조를 가지고 있는데
삭제를 위해선 노드의 연결을 정리해야 한다.

1. removeNode를 생성하고 여기에 기준 노드의 다음 노드 주소를 저장한다

즉 10(기준) -> 20 -> 30 에서 20이 removeNode가 된다.

2. removeNode(20)이 가리키는 것(30)을 기준노드(10)가 가리키게 한다.

3. 메모리를 해제시키면서 마무리

참고 : https://dojang.io/mod/page/view.php?id=645

https://opentutorials.org/module/1335/8940
