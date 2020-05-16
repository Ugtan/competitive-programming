// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            auto pos = mp.find(target - nums[i]);
            if(pos != mp.end())
                return {pos->second, i};
            mp[nums[i]] = i;
        }
        return {};
    }
};