// find the square root of the given number
// If the square root is decimal truncate the decimals.

// Approach: Use binary search to find the square root.

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int start = 0;
        int end = x;
        while (start < end) {
            long mid = start + floor((end-start)/2);
            if (mid * mid == x)
                return mid;
            else if(mid * mid > x)
                end = mid;
            else if (mid * mid < x)
                start = mid + 1;  
        }
        return start - 1;
    }
};
