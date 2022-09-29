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

| 函数接口                | 函数功能说明         |
| ----------------------- | -------------------- |
| bool empty() const;     | 判断队列是否为空     |
| void clear();           | 清空队列             |
| int size() const;       | 返回队列中的元素个数 |
| void enqueue(const T&); | 入队                 |
| T dequeue();            | 出队                 |
| T front() const;        | 返回队首元素         |
| T back() const;         | 返回队尾元素         |

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

| 函数接口               | 函数功能说明               |
| ---------------------- | -------------------------- |
| BST(); | 构造函数 |
| BST(const std::vector\<T>&); | 构造函数 |
| bool empty() const;    | 判断二叉搜索树是否为空     |
| void clear();          | 清空二叉搜索树             |
| int size() const;      | 返回二叉搜索树中的元素个数 |
| void insert(const T&); | 二叉搜索树的插入操作       |
| void remove(const T&); | 二叉搜索树的删除操作       |
| std::vector\<T> preOrder() const; | 前序遍历递归实现           |
| std::vector\<T> inOrder() const; | 中序遍历递归实现           |
| std::vector\<T> postOrder() const; | 后序遍历递归实现           |
| std::vector\<T> preOrderTraversal() const; | 前序遍历非递归实现 |
| std::vector\<T> inOrderTraversal() const; | 中序遍历非递归实现 |
| std::vector\<T> postOrderTraversal() const; | 后序遍历非递归实现 |
| std::vector\<T> preOrderMorris() const; | Morris前序遍历 |
| std::vector\<T> inOrderMorris() const; | Morris中序遍历 |
| std::vector\<T> postOrderMorris() const; | Morris后序遍历 |
| std::vector\<std::vector\<T>> levelOrderTraversal() const; | 二叉搜索树的层序遍历结果 |
| | |

使用示例1：

```cpp
#include <iostream>
#include <vector>
#include "src/bst.h"
using namespace std;
using namespace DataStructures;
int main() {
    BST<int> bst;
    bst.insert(3);
    bst.insert(2);
    bst.insert(5);
    bst.insert(4);
    vector<int> res = bst.preOrder();
    cout << "preOrder:";
    for (auto n : res) {
        cout << n << " ";
    }
    // preOrder:3 2 5 4 
    cout << endl;
    res = bst.inOrder();
    cout << "inOrder:";
    for (auto n : res) {
        cout << n << " ";
    }
    // inOrder:2 3 4 5 
    cout << endl;
    res = bst.postOrder();
    cout << "postOrder:";
    for (auto n : res) {
        cout << n << " ";
    }
    // postOrder:2 4 5 3 
    cout << endl;
    return 0;
}
```

使用示例2：

```cpp
#include <iostream>
#include "src/bst.h"
using namespace std;
using namespace DataStructures;
int main() {
    BST<int> bst;
    for (int i = 10; i >= 0; --i) {
        bst.insert(i);
    }
    for (int i = 0; i <= 10; ++i) {
        bst.insert(i);
    }
    vector<int> res = bst;
    for (int n: res) {
        cout << n << " ";
    }
    // 10 9 10 8 9 7 8 6 7 5 6 4 5 3 4 2 3 1 2 0 1 0
    return 0;
}
```

