class Solution {
public:
    bool isCircularSentence(string sentence) {
        for (int i = 1; sentence[i]; i++) {
            if (sentence[i] == ' ') {
                if (sentence[i - 1] != sentence[i + 1]) {
                    return false;
                }
            }
        }
        return sentence[0] == sentence.back();
    }
};

// Problem Link: https://leetcode.com/problems/circular-sentence/description/
// Time Complexity: O(n)
