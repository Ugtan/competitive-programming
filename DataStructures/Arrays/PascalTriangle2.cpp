// Program to print pascal triangle without extra space

#include <bits/stdc++.h>

using namespace std;

void pascal(int n)
{
    int arr[n][n], c;

    for (int line = 1; line < n; line++)
    {
        c = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << c << " ";
            c = c * (line - i) / i;
        }
        cout << endl;
    }
}

int main()
{
    int n = 10;
    pascal(n);
    return 0;
}
