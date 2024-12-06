class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int& num : nums) {
            result = result ^ num;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/single-number/description/
// Time Complexity: O(n)
