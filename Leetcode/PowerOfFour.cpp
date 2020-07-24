// To check if the number is a power of four.

// Approach: Using bit manipulation
// Check if the number is power of 2 and the first set 
// bit from right is divisible by 2

class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && !((num)&(num-1)) && ffs(num)%2;
    }
};
