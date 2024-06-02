class Solution {
public:
    int countPrimes(int n) 
    {
        vector<int> primes(n, 1);

        for (int p = 3; p < n; p += 2)
        {
            if (primes[p] == 0) continue;
            
            for (int i = p + p; i < n; i += p)
            {
                primes[i] = 0;
            }
        }
        int count = (n > 2) ? 1: 0;

        for (int i = 3; i < n; i += 2)
        {
            count += primes[i];
        }
        return count;
    }
};
