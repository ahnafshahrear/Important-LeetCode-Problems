class Solution {
public:
    double myPow(double x, long long n) {
        if (!n) {
            return 1;
        } else if (n < 0) {
            return 1 / myPow(x, -n);
        } else if (n & 1) {
            return x * myPow(x * x, n / 2);
        } else {
            return myPow(x * x, n / 2);
        }
    }
};

// Problem Link: https://leetcode.com/problems/powx-n/description/
// Time Complexity: O(logn)
