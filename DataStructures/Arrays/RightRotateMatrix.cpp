// Right rotate a 2D matrix by 0 degrees. 

#include <bits/stdc++.h>
#define N 4

using namespace std;

void print(int matrix[N][N], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

void reverse(int arr[], int n) {
    int l=0, r=n-1;
    while(l<r)
        swap(arr[l++], arr[r--]);
}

void rotate(int matrix[N][N], int n) {
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            swap(matrix[i][j], matrix[j][i]);
    
    for(int i=0;i<n;i++)
        reverse(matrix[i], n);
    print(matrix, n);
}

int main() 
{
    int a[N][N] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    rotate(a, N); 
    return 0; 
}
