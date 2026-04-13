class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Submitted for 75DaysLeetCodeChallenge DAY 33
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        if(n == count) return head->next;
        int pos = count - n;
        ListNode* temp1 = head;
        for(int i = 1; i < pos; i++) temp1 = temp1->next;
        temp1->next = temp1->next->next;
        return head;
    }
};