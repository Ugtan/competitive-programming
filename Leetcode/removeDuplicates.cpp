// Remove duplicates and return the size of unique elements in array.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto ip = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), ip));
        return nums.size();
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        if (nums.size() == 0) return 0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[j-1]){
             nums[i] = nums[j];
             i++;   
            }
        }
        return i;
    }
};
