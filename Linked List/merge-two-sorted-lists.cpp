class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* mergedList = new ListNode();
        ListNode* fake = mergedList;

        while (list1 != nullptr and list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                mergedList->next = list1;
                list1 = list1->next;
                mergedList = mergedList->next;
            }
            else 
            {
                mergedList->next = list2;
                list2 = list2->next;
                mergedList = mergedList->next;
            }
        }    

        if (list1 != nullptr) mergedList->next = list1;
        else mergedList->next = list2;

        return fake->next;    
    }
};

//... Time Complexity = O[n1 + n2]
