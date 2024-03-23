class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n = s.size();
        bool cache[n][n];
        memset(cache, false, sizeof(cache));
        
        int start = 0, end = 0;

        for (int k = 0; k < n; k++)
        {
            cache[k][k] = true;

            if (k and s[k - 1] == s[k]) 
            {
                cache[k - 1][k] = true;
                start = k - 1; end = k;
            }
        }

        for (int d = 2; d < n; d++)
        {
            for (int k = 0; k < n - d; k++)
            {
                int x = k + d;
                if (s[k] == s[x] and cache[k + 1][x - 1]) 
                {
                    cache[k][x] = true;
                    start = k; end = x;
                }
            }
        }

        return s.substr(start, end - start + 1);
    }
};
