class Solution {
public:
    string reverseVowels(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++) {
            if (isVowel(s[i])) {
                while (!isVowel(s[j])) {
                    j--;
                }
                swap(s[i], s[j--]);
            }
        }
        return s;
    }
    bool isVowel(char x) {
        return tolower(x) == 'a' or tolower(x) == 'e' or tolower(x) == 'i' or tolower(x) == 'o' or tolower(x) == 'u';
    }
};

// Problem Link: https://leetcode.com/problems/reverse-vowels-of-a-string/description/
// Time Complexity: O(n)
