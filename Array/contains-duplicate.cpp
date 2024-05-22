class Solution {
public:
    bool containsDuplicate(vector<int> &nums) 
    {
        unordered_set<int> visited;

        for (int n: nums)
        {
            if (visited.count(n)) 
            {
                return true;
            }
            visited.insert(n);
        }
        return false;
    }
};

//... Time Complexity = O[n]
