class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int result = 0;

        for (int num : numbers) {
            if (!numbers.count(num - 1)) {
                int count = 1;
                while (numbers.count(num + count)) {
                    count++;
                }
                result = max(result, count);
            }
        }
        return result;
    }
};
