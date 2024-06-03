class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if (!n) return false;
        else if (n == 1) return true;
        return !(n % 4) and isPowerOfFour(n / 4);
    }
};
