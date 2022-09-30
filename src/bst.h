//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_BST_H
#define DATA_STRUCTURES_BST_H
#include <vector>
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
    explicit BST(std::vector<T> nums) : root(nullptr), len(0) {
        for (int i = 0; i < nums.size(); ++i) {
            insert(nums[i]);
        }
    }
    ~BST() {
        clear();
    }
    bool empty() const {
        return len == 0;
    }
    void clear() {
        if (!root) return;
        destroy(root);
        root = nullptr;
    }
    int size() const {
        return len;
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
    bool remove(const T& item) {
        return false;
        // TODO:
    }
    std::vector<T> preOrder() const {
        std::vector<T> res;
        pre(root, res);
        return res;
    }
    std::vector<T> inOrder() const {
        std::vector<T> res;
        in(root, res);
        return res;
    }
    std::vector<T> postOrder() const {
        std::vector<T> res;
        post(root, res);
        return res;
    }
//    std::vector<T> preOrderTraversal() const {
//
//    }
//    std::vector<T> inOrderTraversal() const {
//
//    }
//    std::vector<T> postOrderTraversal() const {
//
//    }
    std::vector<std::vector<T>> levelOrderTraversal() const {
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
    std::vector<T> preOrderMorris() const {
        if (!root) return {};
        std::vector<T> res;
        TreeNode* p1 = root;
        TreeNode* p2 = nullptr;
        while (p1) {
            p2 = p1->lc;
            if (p2) {
                while (p2->rc != nullptr && p2->rc != p1) {
                    p2 = p2->rc;
                }
                if (p2->rc == nullptr) {
                    res.push_back(p1->data);
                    p2->rc = p1;
                    p1 = p1->lc;
                    continue;
                } else {
                    p2->rc = nullptr;
                }
            } else {
                res.push_back(p1->data);
            }
            p1 = p1->rc;
        }
        return res;
    }
//    std::vector<T> inorderMorris() const {
//
//    }
//    std::vector<T> postorderMorris() const {
//
//    }
    int height() {
        // TODO:
        return 0;
    }
    operator std::vector<T>() {
        if (!root) return {};
        std::vector<T> res;
        LQueue<TreeNode*> q;
        q.enqueue(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.dequeue();
            res.push_back(node->data);
            if (node->lc) q.enqueue(node->lc);
            if (node->rc) q.enqueue(node->rc);
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
        }
    }
};
}
#endif //DATA_STRUCTURES_BST_H
