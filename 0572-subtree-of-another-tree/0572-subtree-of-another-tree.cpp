class Solution {
public:
    // Submitted for 75DaysLeetCodeChallenge DAY 37
    bool fun(TreeNode* a, TreeNode* b) {
        if(a==NULL&&b==NULL) return true;
        if(a==NULL||b==NULL) return false;
        if(a->val!=b->val) return false;
        return fun(a->left,b->left) && fun(a->right,b->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL) return true;
        if(root==NULL) return false;
        if(fun(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};