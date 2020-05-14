#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int lcs(char *X, char *Y, int m, int n) {
  int lcs[m + 1][n + 1];
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0) {
        lcs[i][j] = 0;
      } else if (X[i - 1] == Y[j - 1]) {
        lcs[i][j] = lcs[i - 1][j - 1] + 1;
      } else {
        lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
      }
    }
  }
  return lcs[m][n];
}

int main() {
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";
  int m = strlen(X);
  int n = strlen(Y);
  cout << "Length of LCS is " << lcs(X, Y, m, n) << endl;
  return 0;
}