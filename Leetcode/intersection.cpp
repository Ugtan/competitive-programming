// To find the intersection of two given arrays.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        vector<int> intersection;
        
        for(int e: nums1) {
            s.insert(e);
        }
        
        for(int e: nums2) {
            if(s.count(e)) {
                intersection.push_back(e);
                s.erase(e);
            }
        }
        return intersection;
    }
};