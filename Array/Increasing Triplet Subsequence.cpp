class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX;
        int small = INT_MAX;

        for (int& num : nums) {
            if (num <= smallest) {
                smallest = num;
            } else if (num <= small) {
                small = num;
            } else {
                return true;
            }
        }
        return false;
    }
};

// Problem Link: https://leetcode.com/problems/increasing-triplet-subsequence/description/
// Time Complexity: O(n)
