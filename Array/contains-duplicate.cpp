class Solution {
public:
    bool containsDuplicate(vector<int> &nums) 
    {
        unordered_set<int> uniques;

        for (int n: nums)
        {
            uniques.insert(n);
        }
        return nums.size() != uniques.size();
    }
};

//... Time Complexity = O[n]
