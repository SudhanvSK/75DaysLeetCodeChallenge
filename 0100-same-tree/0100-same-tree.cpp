class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Submitted for 75DaysLeetCodeChallenge DAY 36
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};