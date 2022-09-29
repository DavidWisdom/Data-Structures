//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_LIST_H
#define DATA_STRUCTURES_LIST_H
namespace DataStructures {
    template <typename T>
    class List {
    private:
        void operator=(const List&) {}
        List(const List&) = default;
    public:
        List() = default;
        virtual ~List() = default;
        virtual void clear() = 0;
        virtual bool empty() const = 0;
        virtual T remove() = 0;
        virtual void push_front(const T&) = 0;
        virtual T pop_front() = 0;
        virtual T front() const = 0;
        virtual void push_back(const T&) = 0;
        virtual T pop_back() = 0;
        virtual T back() const = 0;
        virtual int size() const = 0;
        virtual T& operator[](int) const = 0;
    };
}
#endif //DATA_STRUCTURES_LIST_H
