//
// Created by DavidWisdom on 2022/9/28.
//
#include <iostream>
#include "src/bst.h"
using namespace std;
using namespace DataStructures;
int main() {
    std::vector<int> nums{1,2,3,4,5,5};
    BST<int> bst(nums);
    bst.clear();
    bst.insert(2);
    std::vector<int> res = bst;
    for (int n : res) {
        cout << n << " ";
    }
    return 0;
}