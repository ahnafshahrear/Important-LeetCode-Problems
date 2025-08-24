## 1493. Longest Subarray of 1's After Deleting One Element

[**Problem Link ↗**](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/)

**Description:** Given a binary array nums, you should delete one element from it.
Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

**Solution:**

```cpp
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result = 0;
        int previousCount = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                count++;
                result = max(result, previousCount + count);
            } else {
                previousCount = count;
                count = 0;
                if (isPreviousZero(nums, i)) {
                    previousCount = 0;
                }
            }
        }

        return result == nums.size() ? result - 1 : result;
    }

    bool isPreviousZero(vector<int>& nums, int i) {
        if (i > 0 and !nums[i - 1]) {
            return false;
        }

        return !i;
    }
};
```

**Time Complexity:** `O[n]`
