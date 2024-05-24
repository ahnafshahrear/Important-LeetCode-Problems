class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* previous = nullptr;

        while (head != nullptr)
        {
            ListNode* next = head->next;
            head->next = previous;
            previous = head;
            head = next;
        }
        return previous;
    }
};

//... Time Complexity = O[n]
