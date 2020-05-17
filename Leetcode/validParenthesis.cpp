// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s.empty()) return true;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
                stk.push(s[i]);
            else if(stk.empty() == false)
            {
                if(s[i] == '}' && stk.top() == '{')
                    stk.pop();
                else if(s[i] == ']' && stk.top() == '[')
                    stk.pop();
                else if(s[i] == ')' && stk.top() == '(')
                    stk.pop();
                else 
                    return false;
            }
            else
                return false;
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};