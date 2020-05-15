#include <bits/stdc++.h>

using namespace std;

int longestIncreasingSubsequence(int arr[], int n) {
  int LIS[n];
  LIS[0] = 1;

  for (int i = 1; i < n; i++) {
    LIS[i] = 1;
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j] && LIS[i] < LIS[j] + 1) {
        LIS[i] = LIS[j] + 1;
      }
    }
  }
  return *max_element(LIS, LIS + n);
}

int main() {
  int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
  int num = sizeof(arr) / sizeof(arr[0]);
  cout << "Length of LIS is " << longestIncreasingSubsequence(arr, num) << endl;
  return 0;
}