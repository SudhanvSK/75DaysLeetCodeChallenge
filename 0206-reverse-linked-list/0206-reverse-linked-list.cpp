class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Submitted for 75DaysLeetCodeChallenge DAY 28
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* temp = curr->next; 
            curr->next = prev;            
            prev = curr;                  
            curr = temp;               
        }
        return prev;
    }
};