// Print all leaders in an array. Leader is a element if it is 
// greater than all the elements to its right.

#include<bits/stdc++.h>

using namespace std;

void printAllLeaders(int arr[], int n) {
    int max = arr[n-1];
    for(int i=n-2;i>=0;i--) {
        if(arr[i]>max)
            cout << arr[i] << endl;
            max = arr[i];
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    printAllLeaders(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
