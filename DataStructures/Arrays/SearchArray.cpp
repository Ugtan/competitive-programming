// Search in a 2D array.
// 3 Approaches:
// 1. BF O(n)
// 2. Binary search on each row O(nlogn)
// 3. Staircase search

#include<bits/stdc++.h>
#define N 4

using namespace std;


bool search(int matrix[N][N], int n, int element) {
    if(element < matrix[0][0] || element > matrix[1][1])
        return false;
    int r = 0, c = n - 1;
    while(r < n && c >= 0) {
        if(matrix[r][c] < element) r++;
        else if(matrix[r][c] > element) c--;
        else return true;
    }
    return false;

}

int main() 
{
    int a[N][N] = {{2,6,7,12}, {3,8,10,13}, {4,9,11,14}, {5,15,17,20}};
    int element;
    cout << "Enter the element to be searched: ";
    cin >> element;
    cout << search(a, N, element) << endl; 
    return 0; 
}
