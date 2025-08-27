class Solution {
public:
    int countPrimes(int n) {
        if (n < 2)
            return 0;
        vector<bool> primes(n, true);
        primes[0] = primes[1] = false;
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if (primes[i]) {
                int j = i * i;
                while (j < n) {
                    primes[j] = false;
                    j += i;
                }
            }
        }

        for (bool i : primes) {
            if (i == 1)
                count++;
        }

        return count;
    }
};