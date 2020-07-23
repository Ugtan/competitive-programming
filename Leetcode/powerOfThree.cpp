// To check if the given number is a power of three.

// APPROACH: The maximum number in the range of integer
// that is a power of three is pow(3, 19) i.e 1162261467
// so, if this number is divisible by the given number then
// we say it is a power of 3.


class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && !(1162261467 % n);
    }
};
