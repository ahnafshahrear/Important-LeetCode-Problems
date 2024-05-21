class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) 
    {
        vector<int> ans;
        unordered_map<int, int> index;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (index.find(target - nums[i]) != index.end())
            {
                ans = {index[target - nums[i]], i};
                break;
            }
            index[nums[i]] = i;
        }
        return ans;
    }
};

//... Time Complexity = O[n]
