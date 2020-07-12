// To find the number of trailing zeroes in factorial of a given number.

// LOGIC: No. of trailing zeros is equal to no. of fives present in the given number.


class Solution {
public:
    int trailingZeroes(int n) {
        int zeroes = 0;
        int noOfFives = 0;
        
        while(n >= 5) {
            noOfFives = floor(n / 5);
            zeroes += noOfFives;
            n = noOfFives;
        }
        return zeroes;
    }
};
