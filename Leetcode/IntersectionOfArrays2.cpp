// Find the intersection of arrays and turn duplicate element as it is.


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(intersection));
        return intersection;
    }
};
