// Find the complement of the given number.


class Solution {
public:
    int findComplement(int num) {
        int bitlen = floor(log2(num) + 1);
        int bitmask = pow(2, bitlen) - 1;
        return num ^ bitmask;
    }
};
