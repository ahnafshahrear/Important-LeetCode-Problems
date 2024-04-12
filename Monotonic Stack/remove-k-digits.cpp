class Solution {
public:
    string removeKdigits(string number, int k) 
    {
        string monotonicStack = "";

        for (char n: number)
        {
            while (k and monotonicStack.size() and monotonicStack.back() > n)
            {
                monotonicStack.pop_back();
                k--;
            }
            monotonicStack.push_back(n);
        }
        monotonicStack.erase(monotonicStack.size() - k, k);
        monotonicStack.erase(0, monotonicStack.find_first_not_of('0'));

        if (!monotonicStack.size()) 
        {
            return "0";
        }
        return monotonicStack;
    }
};
