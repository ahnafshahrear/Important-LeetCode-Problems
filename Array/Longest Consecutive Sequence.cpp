class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int result = 0;

        for (int& num : nums) {
            if (!seen.count(num - 1)) {
                int count = 1;
                while (seen.count(num + count)) {
                    count++;
                }
                result = max(result, count);
            }
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Time Complexity: O(n)
