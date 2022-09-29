//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_MAXHEAP_H
#define DATA_STRUCTURES_MAXHEAP_H
#include "heap.h"
// 大根堆
namespace DataStructures {
    template <typename T>
    class MaxHeap : public Heap<T> {
    public:
        virtual void push(const T& item) = 0;
        virtual void pop() = 0;
        virtual T top() const = 0;
    };
}
#endif //DATA_STRUCTURES_MAXHEAP_H
