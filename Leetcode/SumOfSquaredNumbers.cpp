// Given a non-negative integer c, your task is to decide
// whether there're two integers a and b such that a2 + b2 = c.

class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0, b = sqrt(c);
        while (a <= b) {
            if (a * a + b * b == c)
                return true;
            else if (a * a + b * b > c)
                b--;
            else
                a++;
        }
        return false;
    }
};
