class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Submitted for 75DaysLeetCodeChallenge DAY 30
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) return true;
        }
        return false;        
    }
};