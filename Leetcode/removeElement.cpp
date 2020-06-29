// Given an array nums and a value val, remove all instances
// of that value in-place and return the new length.


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size() - 1;
        while(i<=j){
            if(nums[i]==val){
                swap(nums[i], nums[j]);
                j--;
            }
            else i++;
        }
        return j+1;
    }
};

