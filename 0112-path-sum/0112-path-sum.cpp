class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Submitted for 75DaysLeetCodeChallenge DAY 38
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) return targetSum == root->val;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};