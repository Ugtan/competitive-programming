#include<bits/stdc++.h>

using namespace std;

void print(int v[], int size) {
    for (int i=0;i<size;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void merge(int v1[], int v2[], int s1, int s2) {  
    int i = 0, j = 0, k = 0;
    int v3[s1+s2];
    while (i < s1 && j < s2) {
        if (v1[i] < v2[j])
            v3[k++] = v1[i++];
        else
            v3[k++] = v2[j++];
    }
    while(i < s1)
        v3[k++] = v1[i++];
    while(j < s2)
        v3[k++] = v2[j++];
    print(v3, s1+s2);
}

int main() {
    int v1[] = {1,2,3,4,5,6};
    int v2[] = {10,11,13,16,20};
    int s1, s2;
    s1 = sizeof(v1) / sizeof(v1[0]);
    s2 = sizeof(v2) / sizeof(v2[0]);
    merge(v1, v2, s1, s2);
    return 0;
}