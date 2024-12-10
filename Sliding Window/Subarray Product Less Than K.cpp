class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, product = 1, result = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while (left <= right and product >= k) {
                product /= nums[left++];
            }
            result += right - left + 1;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/subarray-product-less-than-k/description/
// Time Complexity: O(n)
