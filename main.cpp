//
// Created by DavidWisdom on 2022/9/28.
//
#include <iostream>
#include "src/bst.h"
using namespace std;
using namespace DataStructures;
int main() {
    std::vector<int> nums{6,1,2,3,7,8};
    BST<int> bst(nums);
    bst.insert(2);
    std::vector<int> res = bst;
    for (int n : res) {
        cout << n << " ";
    }
    return 0;
}