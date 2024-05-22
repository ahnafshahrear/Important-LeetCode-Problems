class Solution {
public:
    vector<int> intersect(vector<int> &numbers1, vector<int> &numbers2)
    {
        unordered_map<int, int> count;
        vector<int> intersection;

        for (int n: numbers1)
        {
            count[n]++;
        }
        for (int n: numbers2)
        {
            if (count[n]-- > 0)
            {
                intersection.push_back(n);
            }
        }
        return intersection;
    }
};

//... Time Complexity = O[n]
