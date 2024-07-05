class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums, 0, nums.size() - 1);

        return result;
    }

private:
    vector<vector<int>> result;

    void permutations(vector<int>& nums, int idx, int end) {
        if (idx == end) {
            result.push_back(nums);
            return;
        }
        for (int i = idx; i <= end; i++) {
            swap(nums[i], nums[idx]);
            permutations(nums, idx + 1, end);
            swap(nums[i], nums[idx]);
        }
    }
};
