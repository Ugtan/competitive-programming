// find the partition point in the array.

#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int n)
{
    int GEL[n], SER[n];
    GEL[0] = arr[0];
    SER[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        if (GEL[i - 1] < arr[i])
            GEL[i] = arr[i];
        else
            GEL[i] = GEL[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (SER[i + 1] < arr[i])
            SER[i] = SER[i + 1];
        else
            SER[i] = arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if ((j == 0 && arr[j] < SER[j + 1]) || (j == n - 1 && arr[j] > GEL[j - 1]) || (arr[j] < SER[j + 1] && arr[j] > GEL[j - 1]))
            return arr[j];
    }
    return -1;
}

int main()
{
    int arr[] = {5, 4, 3, 6, 9, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = partition(arr, n);
    cout << "The partition element is " << p << endl;
    return 0;
}
