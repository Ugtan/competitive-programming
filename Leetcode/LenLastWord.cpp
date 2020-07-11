// To find the length of the last word. Return 0 if length does not exists.

// SOLUTION 1
// Skip the spaces and find the length of the word after.


class Solution {
public:
    int lengthOfLastWord(string s) {
        int stringLength = s.length() - 1;
        int wordLength = 0;
        
        while(stringLength>=0 && isspace(s[stringLength]))
            stringLength--;
        
        while(stringLength>=0 && isalpha(s[stringLength])) {
            wordLength++;
            stringLength--;
        }
        return wordLength;
    }
};


// SOLUTION 2

// Using stringstream


class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string lastWord;
        
        while(ss >> lastWord);
        return lastWord.size();
    }
};
