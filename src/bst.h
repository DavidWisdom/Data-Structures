//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_BST_H
#define DATA_STRUCTURES_BST_H
#include <vector>
#include <iostream>
#include "lqueue.h"
namespace DataStructures {
    template <typename T>
    class BST {
    private:
        struct TreeNode {
            T data;
            TreeNode* lc;
            TreeNode* rc;
            TreeNode() : data(T()), lc(nullptr), rc(nullptr) {}
            explicit TreeNode(T item) : data(item), lc(nullptr), rc(nullptr) {}
        };
    public:
        BST() : root(nullptr), len(0) {}
        ~BST() {
            clear();
        }
        void clear() {
            if (!root) return;
            destroy(root);
        }
        void insert(const T& item) {
            if (root == nullptr) {
                root = new TreeNode(item);
                ++len;
                return;
            }
            auto* newNode = new TreeNode(item);
            TreeNode* rootp = root;
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
            LQueue<TreeNode*> q;
            q.enqueue(root);
            while (!q.empty()) {
                int sz = q.size();
                std::vector<T> curr;
                for (int i = 1; i <= sz; ++i) {
                    TreeNode* node = q.front();
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
        TreeNode* root;
        int len;
        static void pre(TreeNode* rt, std::vector<T>& res) {
            if (!rt) return;
            res.push_back(rt->data);
            pre(rt->lc, res);
            pre(rt->rc, res);
        }
        static void in(TreeNode* rt, std::vector<T>& res) {
            if (!rt) return;
            in(rt->lc, res);
            res.push_back(rt->data);
            in(rt->rc, res);
        }
        static void post(TreeNode* rt, std::vector<T>& res) {
            if (!rt) return;
            post(rt->lc, res);
            post(rt->rc, res);
            res.push_back(rt->data);
        }
        static void destroy(TreeNode* rt) {
            if (rt) {
                destroy(rt->lc);
                destroy(rt->rc);
                delete rt;
                rt = nullptr;
            }
        }
    };
}
#endif //DATA_STRUCTURES_BST_H
