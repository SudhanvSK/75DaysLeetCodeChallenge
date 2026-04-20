class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Submitted for 75DaysLeetCodeChallenge DAY 40
        while (root) {
            if (p->val > root->val && q->val > root->val) root = root->right;
            else if (p->val < root->val && q->val < root->val) root = root->left;
            else return root;
        }
        return nullptr;        
    }
};