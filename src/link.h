//
// Created by DavidWisdom on 2022/9/28.
//

#ifndef DATA_STRUCTURES_LINK_H
#define DATA_STRUCTURES_LINK_H
#include <cassert>
namespace DataStructures {
    template <typename T>
    class Link {
    public:
        T data;
        Link* next;
        explicit Link(T item = T(), Link* nextp = nullptr) : data(item), next(nextp) {}
    };
}
#endif //DATA_STRUCTURES_LINK_H
