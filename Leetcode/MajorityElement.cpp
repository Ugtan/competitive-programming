// Given an array of size n, find the majority element.
// The majority element is the element that appears more
// than ⌊ n/2 ⌋ times.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            if(++mp[nums[i]] > (int)(nums.size() / 2))
                return nums[i];
        }
        return -1;
    }
};
