//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
namespace DataStructures {
    template <typename T>
    class Queue {
    private:
        void operator=(const Queue&) = default;
        Queue(const Queue&) = default;
    public:
        Queue() = default;
        virtual ~Queue() = default;
        virtual bool empty() const = 0;
        virtual void clear() = 0;
        virtual int size() const = 0;
        virtual void enqueue(const T&) = 0;
        virtual T dequeue() = 0;
        virtual T front() const = 0;
        virtual T back() const = 0;
    };
}

#endif //DATA_STRUCTURES_QUEUE_H
