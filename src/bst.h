//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_BST_H
#define DATA_STRUCTURES_BST_H
#include <vector>
namespace DataStructures {
    template <typename T>
    struct TreeNode {
        T data;
        TreeNode* lc;
        TreeNode* rc;
        TreeNode() : data(T()), lc(nullptr), rc(nullptr) {}
        explicit TreeNode(T item) : data(item), lc(nullptr), rc(nullptr) {}
        TreeNode(T item, TreeNode* lcp, TreeNode* rcp) : data(item), lc(lcp), rc(rcp) {}
    };
    template <typename T>
    class BST {
    public:
        BST() : root(nullptr) {}
        void insert(const T& item) const {
            if (root == nullptr) {
                root = new TreeNode<T>(item);
                return;
            }
            auto* newNode = new TreeNode<T>(item);
            TreeNode<T>* rootp = root;
            while (rootp) {
                if (newNode->data < rootp->data) {
                    if (rootp->lc == nullptr) {
                        rootp->lc = newNode;
                        break;
                    }
                    rootp = rootp->lc;
                }
                else {
                    if (rootp->rc == nullptr) {
                        rootp->rc = newNode;
                        break;
                    }
                    rootp = rootp->rc;
                }
            }
        }
        std::vector<std::vector<int>> levelTraverse() {
            
        }
    private:
        TreeNode<T>* root;
    };
}
#endif //DATA_STRUCTURES_BST_H
