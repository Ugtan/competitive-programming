// Given two strings, determine if they share a common substring. A substring may be as small as one character. 
// LINK = https://www.hackerrank.com/challenges/two-strings/problem

#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
    map<char, int> m;
    int flag = 0;

    for (auto e : s1)
    {
        m[e]++;
    }
    for (auto e : s2)
    {
        cout << e << " " << s1.find(e);
        if (s1.find(e) > 0)
        {
            flag = 1;
            break;
        }
    }
    return (flag == 1) ? "YES" : "No";
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }

    return 0;
}
