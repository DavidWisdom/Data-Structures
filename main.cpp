//
// Created by DavidWisdom on 2022/9/28.
//
#include <iostream>
#include <vector>
#include "src/bst.h"
using namespace std;
using namespace DataStructures;
int main() {
    LQueue<int> q;
    q.enqueue(2);
    q.clear();
    cout << q.size() << endl;
    q.enqueue(3);
    cout << q.front() << endl;
    return 0;
}
