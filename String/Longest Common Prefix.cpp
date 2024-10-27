class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int length = 0;

        while (1) {
            char x;

            if (strs[0].size() > length) {
                x = strs[0][length];
            } else {
                return prefix;
            }
            for (int i = 1; i < strs.size(); i++) {
                if (strs[i].size() <= length or strs[i][length] != x) {
                    return prefix;
                } 
            }
            length++;
            prefix += x;
        }
        return prefix;
    }
};
