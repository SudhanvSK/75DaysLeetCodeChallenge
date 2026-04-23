class Solution {
public:
    // Submitted for 75DaysLeetCodeChallenge DAY 43

    vector<int> v;
    void helper(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};