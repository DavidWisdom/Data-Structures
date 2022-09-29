cmake_minimum_required(VERSION 3.21)
project(Data_Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(Data_Structures
        src/link.h src/list.h src/alist.h src/llist.h src/stack.h src/lstack.h src/queue.h src/lqueue.h src/skiplist.h src/bst.h src/heap.h src/maxheap.h main.cpp)
