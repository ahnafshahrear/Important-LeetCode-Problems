class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());

        for (int k = nums.size() - 1; k >= 2; k--) {
            int i = 0, j = k - 1;
            while (i < j) {
                (nums[i] + nums[j] > nums[k]) ? count += j-- - i : i++;
            }
        }
        return count;
    }
};

// Problem Link: https://leetcode.com/problems/valid-triangle-number/description/
// Time Complexity: O(n)
