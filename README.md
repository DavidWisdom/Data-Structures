# Data-Structures

## 更新日志

### 1.1 完善了LStack板块

LStack函数接口说明：

| 函数接口             | 函数功能说明       |
| -------------------- | ------------------ |
| bool empty() const;  | 判断栈是否为空     |
| void clear();        | 清空栈             |
| int size() const;    | 返回栈中的元素个数 |
| void push(const T&); | 入栈               |
| T pop();             | 出栈               |
| T top() const; | 返回栈顶元素 |

使用示例：

```cpp
#include <iostream>
#include "src/lstack.h"
using namespace std;
using namespace DataStructures;
int main() {
    LStack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "The top of stack is " << stk.top() << endl;
    // The top of stack is 3
    stk.pop();
    cout << "The size of stack is " << stk.size() << endl;
    // The size of stack is 2
    stk.clear();
    cout << "The size of stack is " << stk.size() << endl;
    // The size of stack is 0
    stk.push(4);
    cout << "The top of stack is " << stk.top() << endl;
    // The top of stack is 4
    return 0;
}
```

### 1.2 完善了LQueue板块

LQueue函数说明：

| 函数接口                | 函数功能说明             |
| ----------------------- | ------------------------ |
| bool empty() const;     | 判断队列是否为空         |
| void clear();           | 清空队列                 |
| int size() const;       | 返回队列中的元素个数     |
| void enqueue(const T&); | 入队                     |
| T dequeue();            | 出队                     |
| T front() const;        | 返回队列中的第一个元素   |
| T back() const;         | 返回队列中的最后一个元素 |

使用示例：

```cpp
#include <iostream>
#include "src/lqueue.h"
using namespace std;
using namespace DataStructures;
int main() {
    LQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    cout << "The front of the queue is " << q.front() << endl;
    // The front of the queue is 1
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    cout << "The front of the queue is " << q.front() << endl;
    // The front of the queue is 3
    cout << "The back of the queue is " << q.back() << endl;
    // The back of the queue is 3
    cout << "The size of the queue is " << q.size() << endl;
    // The size of the queue is 1
    q.clear();
    cout << "The size of the queue is " << q.size() << endl;
    // The size of the queue is 0
    q.enqueue(4);
    q.enqueue(5);
    cout << "The front of the queue is " << q.front() << endl;
    // The front of the queue is 4
    cout << "The back of the queue is " << q.back() << endl;
    // The back of the queue is 5
    cout << "The size of the queue is " << q.size() << endl;
    // The size of the queue is 2
    return 0;
}
```

### 1.3 更新了BST板块

BST函数说明

