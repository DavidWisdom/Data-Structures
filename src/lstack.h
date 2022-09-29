//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_LSTACK_H
#define DATA_STRUCTURES_LSTACK_H
#include "link.h"
#include "stack.h"
namespace DataStructures {
    template <typename T>
    class LStack : public Stack<T> {
    public:
        LStack() : topLink(nullptr), len(0) {}
        ~LStack() {
            clear();
        }
        bool empty() const override {
            return len == 0;
        }
        void clear() override {
            while (topLink) {
                Link<T>* temp = topLink;
                topLink = topLink->next;
                delete temp;
            }
            len = 0;
        }
        int size() const override {
            return len;
        }
        // 入栈
        void push(const T& item) override {
            topLink = new Link<T>(item, topLink);
            ++len;
        }
        // 出栈
        T pop() override {
            assert(len != 0);
            Link<T>* temp = topLink;
            T item = temp->data;
            topLink = topLink->next;
            delete temp;
            --len;
            return item;
        }
        // 返回栈的顶部元素
        T top() const override {
            assert(len != 0);
            return topLink->data;
        }
    private:
        Link<T>* topLink;
        int len;
    };
}
#endif //DATA_STRUCTURES_LSTACK_H
