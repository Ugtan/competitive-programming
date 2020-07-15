// Count all the prime numbers within the given range.

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 1)
            return 0;
        vector <bool> prime(n, true);
        prime[0] = prime[1] = 0;
        int count = 0;
        for (int p = 2; p * p <= n; p++) {
            if(prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int i = 0; i < n; i++) {
            if (prime[i])
                count++;
        }
        return count;    
    }
};