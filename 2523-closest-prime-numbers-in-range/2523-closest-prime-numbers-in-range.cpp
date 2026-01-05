class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right+1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= right; ++i) {
            if (isPrime[i]) {
                for (int j = i*i; j <= right; j += i)
                    isPrime[j] = false;
            }
        }
        vector<int> primes;
        for (int i = max(2, left); i <= right; ++i) {
            if (isPrime[i]) primes.push_back(i);
        }
        int k = primes.size();
        if (k < 2) return {-1, -1};

        int p1 = primes[0], p2 = primes[1];
        int dis = p2 - p1;
        for (int i = 1; i < k-1; ++i) {
            int temp = primes[i+1] - primes[i];
            if (temp < dis) {
                dis = temp;
                p1 = primes[i];
                p2 = primes[i+1];
            }
        }
        return {p1, p2};
    }
};