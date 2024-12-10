class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int current = 0;
        int i = 0, j = 0;

        while (i < nums.size()) {
            current += nums[i];
            while (current >= target) {
                result = min(result, i - j + 1);
                current -= nums[j++];
            }
            i++;
        }
        return (result == INT_MAX) ? 0 : result;
    }
};

// Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/description/
// Time Complexity: O(n)
