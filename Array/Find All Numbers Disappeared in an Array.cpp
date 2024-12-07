class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int& num : nums) {
            int index = abs(num) - 1;
            nums[index] = -abs(nums[index]);
        }
        vector<int> result;

        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] > 0) {
                result.push_back(index + 1);
            }
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
// Time Complexity: O(n)
