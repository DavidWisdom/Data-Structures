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
    bst.insert(6);
    bst.insert(2);
    bst.insert(1);
    bst.insert(5);
    bst.insert(4);
    bst.insert(3);
    vector<int> res = bst.postorder();
    for (int n: res) {
        cout << n << " ";
    }
    return 0;
}
