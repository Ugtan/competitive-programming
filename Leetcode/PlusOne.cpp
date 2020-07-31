// Given a non-empty array of digits representing a 
// non-negative integer, increment one to the integer.


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9)
                digits[i] = 0;
            else {
                digits[i] += 1;
                return digits;
            }
        }
        
        // Special case for 9, 99, 999 and so on
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
