// Given a sorted array and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size() - 1;
        while(first <= last)
        {
            int mid = first + (last - first) / 2;
            if (nums[mid] == target) return mid;
            (nums[mid] < target) ? first = mid + 1 : last = mid - 1;
        }
        return first;
    }
};
