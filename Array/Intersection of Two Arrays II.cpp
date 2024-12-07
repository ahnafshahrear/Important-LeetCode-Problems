class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;

        for (int& num : nums1) {
            count[num]++;
        } 
        vector<int> result;

        for (int& num : nums2) {
            if (count[num]-- > 0) {
                result.push_back(num);
            }
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
// Time Complexity: O(m + n)
