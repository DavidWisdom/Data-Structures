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
    std::vector<int> res = bst.preOrderMorris();
    for (int n: res) {
        cout << n << " ";
    }
    return 0;
}