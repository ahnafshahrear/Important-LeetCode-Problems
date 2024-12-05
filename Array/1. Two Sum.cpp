class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                result = {indices[target - nums[i]], i};
                break;
            }
            indices[nums[i]] = i;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/two-sum/description/
// Time Complexity: O(n)
