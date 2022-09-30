//
// Created by DavidWisdom on 2022/9/29.
//

#ifndef DATA_STRUCTURES_BIT_H
#define DATA_STRUCTURES_BIT_H
namespace DataStructures {
    // 树状数组
    class BIT {
    public:
        BIT(int n) : nums(new long long[n]), tree(new long long[n]) {}
        ~BIT() {
            delete[] nums;
            delete[] tree;
        }
        static long long lowbit(long long x) {
            return x & -x;
        }
    private:
        long long* nums;
        long long* tree;
    };
}
#endif //DATA_STRUCTURES_BIT_H
