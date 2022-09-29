//
// Created by DavidWisdom on 2022/9/28.
//
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
    cout << endl;
    res = bst.inOrder();
    cout << "inOrder:";
    for (auto n : res) {
        cout << n << " ";
    }
    cout << endl;
    res = bst.postOrder();
    cout << "postOrder:";
    for (auto n : res) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
