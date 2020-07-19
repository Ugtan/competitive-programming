// Given a non-empty array of integers, every element
// appears twice except for one, Find that.


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleOne;
        for(int i = 0; i < nums.size(); i++) {
            singleOne ^= nums[i];
        }
        return singleOne;
    }
};
