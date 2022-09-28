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
    cout << "The top of the stack is " << stk.top() << endl;
    cout << "The size of the stack is " << stk.size() << endl;
    stk.pop();
    stk.push(3);
    cout << "The top of the stack is " << stk.top() << endl;
    cout << "The size of the stack is " << stk.size() << endl;
    stk.clear();
    cout << "The size of the stack is " << stk.size() << endl;
    return 0;
}
