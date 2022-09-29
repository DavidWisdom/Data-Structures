//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H
#include <iostream>
namespace DataStructures {
    template <typename T>
    class Node {
    private:
        static Node<T>* freeList;
    public:
        T data;
        Node* prev;
        Node* next;
        explicit Node(T item) : data(item), prev(nullptr), next(nullptr) {}
        Node* insertAsPrev(const T& item) {

        }
        Node* insertAsNext(const T& item) {

        }
        void* operator new(size_t) {
            if (!freeList) return ::new Node;
            Node<T>* temp = freeList;
            freeList = freeList->next;
            return temp;
        }
        void operator delete(void* ptr) {
            ((Node<T>*)ptr)->next = freeList;
            freeList = (Node<T>*)ptr;
        }
    };
}
#endif //DATA_STRUCTURES_NODE_H
