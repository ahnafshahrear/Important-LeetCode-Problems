class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> window;
        int left = 0, result = 0;

        for (int right = 0; right < nums.size(); right++) {
            window.insert(nums[right]);

            while (*window.rbegin() - *window.begin() > limit) {
                window.erase(window.find(nums[left++]));
            }
            result = max(right - left + 1, result);
        }
        return result;   
    }
};
