class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0)
                return false;
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }
        int k = primes.size();
        if(k== 0 || k == 1) return {-1,-1};
        int p1=primes[0],p2=primes[1];
        int dis = abs(primes[0] - primes[1]);
        for (int i = 1; i < k-1; ++i) {
            int temp = abs(primes[i + 1] - primes[i]);
            if(temp < dis)
            {
                dis = temp;
                p2 = primes[i+1];
                p1 = primes[i];
            }

        }
        return {p1,p2};
    }
};