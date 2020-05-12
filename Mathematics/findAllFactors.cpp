// Find all factors of a given number
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<int> findAllFactors(int n) {
  vector<int> v;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      v.push_back(i);
      if (i != sqrt(n)) {
        v.push_back(n / i);
      }
    }
  }
  return v;
}

int main() {
  int n;
  cin >> n;
  for (auto e : findAllFactors(n)) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
