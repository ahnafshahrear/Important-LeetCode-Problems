class Solution {
public:
    void moveZeroes(vector<int> &nums)
    {
        int in = 0, z = 0;
        while (in < nums.size())
        {
            if (nums[in])
            {
                swap(nums[in++], nums[z++]);
            }
            else in++;
        }
    }
};

//... Time Complexity = O[n]
