class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        map<char, char> bracket = {{'(', ')'}, {'{', '}'}, {'[', ']'}};

        for (char x : str) {
            if (x == '(' or x == '{' or x == '[') st.push(x);
            else {
                if (st.empty()) return false;
                if (x == bracket[st.top()]) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
