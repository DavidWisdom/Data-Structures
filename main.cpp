//
// Created by DavidWisdom on 2022/9/28.
//
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
