// Conditions: Array must be sorted with no duplicates.

#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int>& v, int k) {
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());
    reverse(v.begin(), v.end());
}

void print(vector<int> v) {
    for (auto e: v) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,10,11,13,16,20,22};
    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;
    rotate(v, k);
    print(v);
    return 0;
}