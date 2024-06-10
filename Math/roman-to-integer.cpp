class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        
        for (int i = 0; s[i]; i++)
        {
            ans += roman[s[i]];
            if (i)
            {
                if (s[i] == 'V' or s[i] == 'X')
                {
                    if (s[i - 1] == 'I')
                    {
                        ans -= 2;
                    }
                }
                if (s[i] == 'L' or s[i] == 'C')
                {
                    if (s[i - 1] == 'X')
                    {
                        ans -= 20;
                    }
                }
                if (s[i] == 'D' or s[i] == 'M')
                {
                    if (s[i - 1] == 'C')
                    {
                        ans -= 200;
                    }
                }
            }
        }
        return ans;
    }
};
