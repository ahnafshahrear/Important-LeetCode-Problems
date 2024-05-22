class Solution {
public:
    void rotate(vector<int> &numbers, int k) 
    {
        k = k % numbers.size();
        reverse(numbers.begin(), numbers.end());
        reverse(numbers.begin() + k, numbers.end()); 
        reverse(numbers.begin(), numbers.begin() + k);
    }
};

//... Time Complexity = O[n]
