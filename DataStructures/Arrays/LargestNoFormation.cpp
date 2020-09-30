// Program to form a largest number from a collection of strings.

#include <bits/stdc++.h>

using namespace std;

int myCompare(string A, string B) {
    string AB,BA;
    AB = A.append(B);
    BA = B.append(A);
    return (AB>BA)? 1:0;
}

void largest(vector<string> v)
{
    sort(v.begin(), v.end(), myCompare);
    for(int i=0;i<v.size();i++)
        cout << v[i];
    cout << endl;
}

int main()
{
    vector<string> v;
    v.push_back("55");
    v.push_back("566");
    v.push_back("66");
    v.push_back("9");
    largest(v);
    return 0;
}
