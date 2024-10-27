class Solution {
public:
    int climbStairs(int n)
    {
        int cache[46] = {0, 1, 2};

        for (int i = 3; i <= n; i++) {
            cache[i] = cache[i - 1] + cache[i - 2];
        }
        return cache[n];
    }
};
