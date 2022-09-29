//
// Created by DavidWisdom on 2022/9/29.
//
#include "node.h"
namespace DataStructures {
template <typename T>
Node<T>* Node<T>::freeList = nullptr;
}