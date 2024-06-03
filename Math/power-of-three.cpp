class Solution {
public:
    bool isPowerOfThree(int n)
    {
        while (n and n % 3 == 0)
        {
            n /= 3;
        }
        return n == 1;
    }
};
