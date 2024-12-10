class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i = 0, j = 0;
        long long result = 0;
        long long frequency = 0;
        int maxElement = *max_element(nums.begin(), nums.end());

        while (i < nums.size()) {
            if (nums[i] == maxElement) {
                frequency++;
            }
            while (frequency >= k) {
                if (nums[j++] == maxElement) {
                    frequency--;
                }
            }
            result += j;  
            i++;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/
// Time Complexity: O(n)
