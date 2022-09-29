//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_HEAP_H
#define DATA_STRUCTURES_HEAP_H
// 数组模拟堆
namespace DataStructures {
    template <typename T>
    class Heap {
    public:
        explicit Heap(int capacity) : data(new T[capacity]), len(capacity) {}
        virtual void push(const T& item) = 0;
        virtual void pop() = 0;
        virtual T top() const = 0;
    private:
        T* data;
        int len;
        virtual void swim(int n) = 0;
        virtual void sink(int n) = 0;
    };
}
#endif //DATA_STRUCTURES_HEAP_H
