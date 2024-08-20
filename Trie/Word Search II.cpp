class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = new TrieNode;

        for (string word : words) {
            insert(word);
        }
        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                search(r, c, board, root);
            }
        }
        return ans;
    }

private:
    vector<string> ans;
    string word = "";
    
    struct TrieNode {
        TrieNode* links[26];
        bool end = false;

        TrieNode() {
            for (int i = 0; i < 26; i++) {
                links[i] = nullptr;
            }
        }

        bool containsKey(char ch) {
            return links[ch - 'a'] != nullptr;
        }

        void setKey(char ch) {
            links[ch - 'a'] = new TrieNode;
        }

        TrieNode* getKey(char ch) {
            return links[ch - 'a'];
        }

        void setEnd() {
            end = true;
        }

        bool isEnd() {
            return end;
        }
    };

    TrieNode* root;

    void insert(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            if (!node->containsKey(ch)) {
                node->setKey(ch);
            }
            node = node->getKey(ch);
        }
        node->setEnd();
    }

    void search(int r, int c, vector<vector<char>>& board, TrieNode* node) {
        if (r < 0 or r >= board.size() or c < 0 or c >= board[0].size() or board[r][c] == '-') {
            return;
        }
        if (!node->containsKey(board[r][c])) {
            return;
        }
        node = node->getKey(board[r][c]);
        word.push_back(board[r][c]);

        if (node->isEnd()) {
            ans.push_back(word);
            node->end = false;
        }
        board[r][c] = '-';
        
        search(r + 1, c, board, node);
        search(r - 1, c, board, node);
        search(r, c + 1, board, node);
        search(r, c - 1, board, node);

        board[r][c] = word.back();
        word.pop_back();
    }
};
