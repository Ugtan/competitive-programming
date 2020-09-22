// Two possible solutions are: With extra space and without extra space.

#include<bits/stdc++.h>

using namespace std;

int removeDuplicatesWithSpace(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int result[n];
    int j = 1;
    result[0] = arr[0];
    for (int i=1; i < n;i++) {
        if (arr[i] != arr[i-1])
            result[j++] = arr[i];
    }
    return j;
}

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int j = 1;
    for (int i=1; i < n; i++) {
        if (arr[i] != arr[i-1])
            arr[j++] = arr[i];
    }
    return j;
}

int main() {
    int arr[] = {1,2,3,4,5,5,6,10,11,13,16,20,22};
    int i, j;
    i = removeDuplicatesWithSpace(arr, sizeof(arr)/sizeof(arr[0]));
    j = removeDuplicates(arr, sizeof(arr)/sizeof(arr[0]));
    cout << i << " " << j << endl;
    return 0;
}
