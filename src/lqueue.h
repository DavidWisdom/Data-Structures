//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_LQUEUE_H
#define DATA_STRUCTURES_LQUEUE_H
#include "link.h"
#include "queue.h"
namespace DataStructures {
template <typename T>
class LQueue : public Queue<T> {
private:
    Link<T>* head;
    Link<T>* tail;
    int len;
public:
    LQueue() : head(new Link<T>), tail(head), len(0) {}
    ~LQueue() {
        clear();
        delete head;
    }
    bool empty() const override {
        return len == 0;
    }
    void clear() override {
        tail = head->next;
        while (tail) {
            Link<T>* next = tail->next;
            delete tail;
            tail = next;
        }
        tail = head;
        len = 0;
    }
    int size() const override {
        return len;
    }
    void enqueue(const T& item) override {
        tail->next = new Link<T>(item);
        tail = tail->next;
        ++len;
    }
    // 入队
    T dequeue() override {
        assert(len != 0);
        T item = head->next->data;
        Link<T>* temp = head->next;
        head->next = temp->next;
        if (tail == temp) tail = head;
        delete temp;
        --len;
        return item;
    }
    // 出队
    T front() const override {
        assert(len != 0);
        return head->next->data;
    }
    // 返回队首元素
    T back() const override {
        assert(len != 0);
        return tail->data;
    }
    // 返回队尾元素
};
}
#endif //DATA_STRUCTURES_LQUEUE_H
