// Check if a given number is a power of two.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return 0;
        return (n & (n-1)) == 0;
    }
};