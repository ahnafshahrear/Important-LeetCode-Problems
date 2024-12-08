class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int index = right;

        while (left <= right) {
            (abs(nums[left]) >= abs(nums[right])) ? result[index--] = nums[left] * nums[left++] : result[index--] = nums[right] * nums[right--];
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
// Time Complexity: O(n)
