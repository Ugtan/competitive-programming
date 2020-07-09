// To find the length of largest substring using sliding window algorithm.

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int maxWindow = 0, start = 0, end = 0;
        set <char> s;
        int len = str.size();
        while(start < len && end < len) {
            if(s.find(str[end]) == s.end()) {
                s.insert(str[end++]);
                maxWindow = max(maxWindow, end - start);
            }
            else {
                s.erase(str[start++]);
            }
        }
        return maxWindow;
    }
};