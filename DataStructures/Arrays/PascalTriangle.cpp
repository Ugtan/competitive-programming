// Program to print pascal triangle

#include <bits/stdc++.h>

using namespace std;

void pascal(int n)
{
    int arr[n][n];

    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (i == 0 || i == line)
                arr[line][i] = 1;
            else
            {
                arr[line][i] = arr[line - 1][i] + arr[line - 1][i - 1];
            }
            cout << arr[line][i] << " ";
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
