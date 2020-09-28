// Sort the array into waveform i.e a[0] > a[1] < a[2] > a[3]

#include <bits/stdc++.h>

using namespace std;

void sortWaveform(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i > 0 && arr[i - 1] > arr[i])
            swap(arr[i], arr[i - 1]);
        if (i < n - 1 && arr[i] < arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {11, 6, 7, 4, 3, 22, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortWaveform(arr, n);
    print(arr, n);
    return 0;
}
