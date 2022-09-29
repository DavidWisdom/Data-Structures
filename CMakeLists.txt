cmake_minimum_required(VERSION 3.21)
project(Data_Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(Data_Structures
        src/link.h src/link.cpp src/node.h src/node.cpp src/list.h src/alist.h src/llist.h src/stack.h src/astack.h src/lstack.h src/nge.h src/queue.h src/lqueue.h src/skiplist.h src/bst.h src/avl.h src/rbtree.h src/heap.h src/maxheap.h src/trie.h src/bit.h main.cpp)
