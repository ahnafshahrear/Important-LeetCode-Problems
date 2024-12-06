class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, z = 0; i < nums.size(); i++) {
            if (nums[i]) {
                swap(nums[i], nums[z++]);
            }
        }
    }
};

// Problem Link: https://leetcode.com/problems/move-zeroes/description/
// Time Complexity: O(n)
