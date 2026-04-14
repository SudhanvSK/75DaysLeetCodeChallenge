class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Submitted for 75DaysLeetCodeChallenge DAY 34
        if(root==NULL) return root;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};