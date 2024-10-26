class Solution {
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast and !fast->next)
        {
            slow = slow->next;
        }

        ListNode* previous = nullptr;
        ListNode* next;

        while (slow)
        {
            next = slow->next;
            slow->next = previous;
            previous = slow;
            slow = next;
        }
        slow = previous;
        fast = head;

        while (fast and slow)
        {
            if (fast->val != slow->val)
            {
                return false;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};
