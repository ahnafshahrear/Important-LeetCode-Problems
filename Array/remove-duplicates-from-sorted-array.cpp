class Solution {
public:
    int removeDuplicates(vector<int> &nums) 
    {
        int index = 0;
        int previous = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != previous)
            {
                nums[index++] = nums[i];
                previous = nums[i];
            }
        }
        return index;
    }
};

//... Time Coplexity = O[n]
