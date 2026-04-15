class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Submitted for 75DaysLeetCodeChallenge DAY 35
        if(!root) return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};