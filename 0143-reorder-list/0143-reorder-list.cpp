class Solution {
public:
    void reorderList(ListNode* head) {
        // Submitted for 75DaysLeetCodeChallenge DAY 32
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;

        ListNode* i = second;
        ListNode* j = NULL;
        while(i!=NULL)
        {
            ListNode* temp = i->next;
            i->next = j;
            j = i;
            i = temp;
        }

        ListNode* first = head;
        second = j;
        while(second!=NULL)
        {
            ListNode* t1 = first->next;
            ListNode* t2 = second->next;
            first->next = second;
            second->next = t1;
            first = t1;
            second = t2;
        }
    }
};