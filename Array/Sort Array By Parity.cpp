class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int idx = nums.size() - 1;

        for (int i = 0; i < idx; i++) {
            if (nums[i] & 1) {
                swap(nums[i--], nums[idx--]);
            }
        }
        return nums;
    }
};

// Problem Link: https://leetcode.com/problems/sort-array-by-parity/description/
// Time Complexity: O(n)
