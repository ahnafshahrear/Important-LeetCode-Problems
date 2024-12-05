class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = m - 1;
        int k = n - 1;

        for (int i = m + n - 1; k >= 0; i--) {
            (j >= 0 and nums1[j] > nums2[k]) ? nums1[i] = nums1[j--] : nums1[i] = nums2[k--];
        }
    }
};

// Problem Link: https://leetcode.com/problems/merge-sorted-array/description/
// Time Complexity: O(m + n)
