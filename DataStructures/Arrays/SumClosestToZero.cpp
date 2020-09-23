// Two possible solutions are: With extra space and without extra space.

#include<bits/stdc++.h>

using namespace std;


void sumClosestToZero(int arr[], int n) {
    sort(arr, arr+n);
    int l = 0, r = n - 1, sum, min_sum = INT_MAX;
    int min_l, min_r;
    while(l < r) {
        sum = arr[l] + arr[r];
        if( abs(sum) < abs(min_sum)) {
            min_sum = sum;
            min_l = arr[l];
            min_r = arr[r];
        }
        if (sum < 0) l++;
        else r--;
    }
    cout << min_l << " " << min_r << endl;
}

int main() {
    int arr[] = {2,62,-12,72,-78,83};
    int n = sizeof(arr)/sizeof(arr[0]);
    sumClosestToZero(arr, n);
    return 0;
}
