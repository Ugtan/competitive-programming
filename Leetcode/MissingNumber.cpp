// Find the missing number in the array of distinct numbers.


// APPROACH 1: Using Bit Manipulation

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNumber = nums.size();
        for(int i = 0; i < nums.size(); i++) {
            missingNumber ^= i ^ nums[i];
        }
        return missingNumber;
    }
};

// APPROACH 2(Better one): Using difference of sum

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        return totalSum - sum;
    }
};
