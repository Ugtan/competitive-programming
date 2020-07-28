/* The Hamming distance between two integers is the number
of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.
*/

// Approach: Find the xor of x and y and then using the 
// brian kernighan's algorithm find the number of set bits.


class Solution {
public:
    int hammingDistance(int x, int y) {
        int _xor = x ^ y, count = 0;
        
        while(_xor) {
            _xor &= (_xor - 1);
            count++;
        }
        return count;
    }
};
