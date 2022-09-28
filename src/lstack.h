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
        int size() const override {
            return len;
        }
        bool empty() const override {
            return len == 0;
        }
        void clear() override {
            
        }
        void push(const T& item) override {
            topLink = new Link<T>(item, topLink);
        }
        T pop() override {

        }
        T top() const override {
            return topLink->data;
        }
    private:
        Link<T>* topLink;
        int len;
    };
}
#endif //DATA_STRUCTURES_LSTACK_H
