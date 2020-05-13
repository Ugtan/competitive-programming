// Decimal to binary CPP program
#include <iostream>

using namespace std;

int main() {
  int n, i, arr[100];
  cin >> n;
  for (i = 0; n > 0; i++) {
    arr[i] = n % 2;
    n = n / 2;
  }
  for (i = i - 1; i >= 0; i--) {
    cout << arr[i];
  }
  cout << endl;
  return 0;
}
