class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int maxNumber = *max_element(nums.begin(), nums.end());
        long long freq = 0, count = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == maxNumber) 
            {
                freq++;
            }
            while (freq >= k)
            {
                if (nums[i++] == maxNumber)
                {
                    freq--;
                }
            }
            count += i;
        }
        return count;
    }
};
