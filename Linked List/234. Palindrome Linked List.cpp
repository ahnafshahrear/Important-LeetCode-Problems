class Solution {
private:
    ListNode* node;
    
    bool checkPalindrome(ListNode* head) {
        if (head == nullptr) return true;
        bool flag = checkPalindrome(head->next) and (head->val == node->val);
        node = node->next;
        return flag;
    }
public:
    bool isPalindrome(ListNode* head) {
        node = head;
        return checkPalindrome(head);
    }
};

// Problem Link: https://leetcode.com/problems/palindrome-linked-list/description/
// Time Complexity: O(n)
