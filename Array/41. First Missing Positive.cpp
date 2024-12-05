class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            if (nums[i] > 0) {
                int index = nums[i] - 1;
                if (index < size and nums[index] != nums[i]) {
                    swap(nums[index], nums[i]);
                    i--;
                }
            }
        }
        int result = 1;

        while (result <= size) {
            if (nums[result - 1] != result) {
                break;
            }
            result++;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/first-missing-positive/description/
// Time Complexity: O(n)
