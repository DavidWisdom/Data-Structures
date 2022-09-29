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
    stk.pop();
    cout << "The size of stack is " << stk.size() << endl;
    stk.clear();
    cout << "The size of stack is " << stk.size() << endl;
    stk.push(4);
    cout << "The top of stack is " << stk.top() << endl;
    return 0;
}
```

