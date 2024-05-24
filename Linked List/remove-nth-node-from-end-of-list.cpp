class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int in) 
    {
        ListNode* fake = new ListNode(-1, head);
        ListNode* slow = fake;
        ListNode* fast = head;

        while (in--)
        {
            fast = fast->next;
        }
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return fake->next;
    }
};

//... Time Complexity = O[n]
