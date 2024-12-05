class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i = 1;

        while (i < nums.size()) {
            (nums[i] != nums[i - 1]) ? nums[count++] = nums[i++] : i++;
        }
        return count;
    }
};

// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// Time Complexity: O(n)
