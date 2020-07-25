// Reverse all the vowels in the string.

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a') || (c == 'e') ||(c == 'i') ||(c == 'o') ||(c == 'u');
    }
    
    string reverseVowels(string s) {
        int n = s.size();
        for (int i = 0,j = n - 1;i < j;) {
            if (isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if (!isVowel(s[i])) i++;
            if (!isVowel(s[j])) j--;
        
        }
        return s;
    }
};
