//
// Created by DavidWisdom on 2022/9/28.
//
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