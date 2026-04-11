class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Submitted for 75DaysLeetCodeChallenge DAY 31
        ListNode* end = head;
        ListNode* middle = head; 
        int count = 0;
        while(end!=NULL) 
        {
            end = end->next;
            count++;
        }
        for(int i=0;i<count/2;i++) middle=middle->next;
        return middle;
    }
};