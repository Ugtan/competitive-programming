// LINK = https://www.interviewbit.com/problems/maximum-unsorted-subarray/

#include <bits/stdc++.h>

using namespace std;

int lengthUnsorted(int arr[], int n)
{
    int l = 0, r = n - 1, i, min, max;
    for (l = 0; l < n - 1; l++)
    {
        if (arr[l] > arr[l + 1])
            break;
    }
    if (l == n - 1)
        return 0;
    for (r = n - 1; r > 0; r--)
    {
        if (arr[r] < arr[r - 1])
            break;
    }
    max = arr[l];
    min = arr[r];
    for (i = l + 1; i <= r; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    for (i = 0; i < l; i++)
    {
        if (arr[i] > min)
        {
            l = i;
            break;
        }
    }
    for (i = n - 1; i > r; i--)
    {
        if (arr[i] < max)
        {
            r = i;
            break;
        }
    }
    return l + r - 1;
}

int main()
{
    int arr[] = {11, 13, 21, 31, 26, 41, 33, 32, 36, 52, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = lengthUnsorted(arr, n);
    cout << "The length of unsorted array is " << p << endl;
    return 0;
}
