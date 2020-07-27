// FizzBuzz problem:
// Return 'Fizz' for multiples of 3
// Return 'Buzz' for multiples of 5
// Return 'FizzBuzz' for multiples of 3 and 5


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i <= n; i++) {
            if (i % 15 == 0) result.push_back("FizzBuzz");
            else if (i % 3 == 0) result.push_back("Fizz");
            else if (i % 5 == 0) result.push_back("Buzz");
            else result.push_back(to_string(i));
        }
        return result;
    }
};
