class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int vote = 0;

        for (int& num : nums) {
            if (!vote) candidate = num;
            (num == candidate) ? vote++ : vote--;
        }
        return candidate;
    }
};

// Problem Link: https://leetcode.com/problems/majority-element/description/
// Time Complexity: O(n)
