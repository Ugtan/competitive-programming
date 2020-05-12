// Find all primes
#include <bits/stdc++.h>

using namespace std;

void findAllPrimes(int n) {
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = 0;
  for (int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }
  for (int i = 0; i < n; i++) {
    if (prime[i])
      cout << i << " ";
  }
  cout << endl;
}

int main() {
  int num;
  cin >> num;
  findAllPrimes(num);
}
