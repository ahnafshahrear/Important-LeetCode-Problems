class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int size = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size - 2; i++) {
            if (i and nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1, k = size - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});

                    while (j < k - 1 and nums[j] == nums[j + 1]) {
                        j++;
                    }
                    while (j < k - 1 and nums[k] == nums[k - 1]) {
                        k--;
                    }
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return result;
    }
};
