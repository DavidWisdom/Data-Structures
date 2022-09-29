//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_BST_H
#define DATA_STRUCTURES_BST_H
#include <vector>
#include "lqueue.h"
namespace DataStructures {
    template <typename T>
    struct TreeNode {
        T data;
        TreeNode* lc;
        TreeNode* rc;
        TreeNode() : data(T()), lc(nullptr), rc(nullptr) {}
        explicit TreeNode(T item) : data(item), lc(nullptr), rc(nullptr) {}
    };
    template <typename T>
    class BST {
    public:
        BST() : root(nullptr), len(0) {}
        ~BST() {
            // TODO:
        }
        void clear() {
            // TODO:
        }
        void insert(const T& item) {
            if (root == nullptr) {
                root = new TreeNode<T>(item);
                ++len;
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
            ++len;
        }
        void remove(const T& item) {
            // TODO:
        }
        std::vector<T> preorder() const {
            std::vector<T> res;
            pre(root, res);
            return res;
        }
        std::vector<T> inorder() const {
            std::vector<T> res;
            in(root, res);
            return res;
        }
        std::vector<T> postorder() const {
            std::vector<T> res;
            post(root, res);
            return res;
        }
//        std::vector<T> preorderTraversal() const {
//
//        }
//        std::vector<T> inorderTraversal() const {
//
//        }
//        std::vector<T> postorderTraversal() const {
//
//        }
        std::vector<std::vector<T>> levelTraversal() const {
            if (!root) return {};
            std::vector<std::vector<T>> res;
            LQueue<TreeNode<T>*> q;
            q.enqueue(root);
            while (!q.empty()) {
                int sz = q.size();
                std::vector<T> curr;
                for (int i = 1; i <= sz; ++i) {
                    TreeNode<T>* node = q.front();
                    q.dequeue();
                    curr.push_back(node->data);
                    if (node->lc) q.enqueue(node->lc);
                    if (node->rc) q.enqueue(node->rc);
                }
                res.push_back(curr);
            }
            return res;
        }
    private:
        TreeNode<T>* root;
        int len;
        static void pre(TreeNode<T>* rt, std::vector<T>& res) {
            if (!rt) return;
            res.push_back(rt->data);
            pre(rt->lc, res);
            pre(rt->rc, res);
        }
        static void in(TreeNode<T>* rt, std::vector<T>& res) {
            if (!rt) return;
            in(rt->lc, res);
            res.push_back(rt->data);
            in(rt->rc, res);
        }
        static void post(TreeNode<T>* rt, std::vector<T>& res) {
            if (!rt) return;
            post(rt->lc, res);
            post(rt->rc, res);
            res.push_back(rt->data);
        }
    };
}
#endif //DATA_STRUCTURES_BST_H
