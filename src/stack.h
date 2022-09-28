//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H
namespace DataStructures {
    template <typename T>
    class Stack {
    private:
        void operator=(const Stack&) {}
        Stack(const Stack&) = default;
        // TODO:
    public:
        Stack() = default;
        virtual ~Stack() = default;
        virtual int size() const = 0;
        virtual bool empty() const = 0;
        virtual void clear() = 0;
        virtual void push(const T& item) = 0;
        virtual T pop() = 0;
        virtual T top() const = 0;
    };
}

#endif //DATA_STRUCTURES_STACK_H
