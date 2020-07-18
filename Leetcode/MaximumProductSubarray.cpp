// Find the maximum product subarray from the given array.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        int maxProd = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];
        for(int i = 1; i < nums.size(); i++){ 
           if (nums[i] < 0) swap(currentMax, currentMin);
           currentMax = max(nums[i] * currentMax, nums[i]);
           currentMin = min(nums[i] * currentMin, nums[i]);
           maxProd = max(maxProd, currentMax);
        }
        return maxProd;
    }
};
