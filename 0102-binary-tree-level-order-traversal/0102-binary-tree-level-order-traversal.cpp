class Solution {
public:
    // Submitted for 75DaysLeetCodeChallenge DAY 41
    void fun(TreeNode* root, vector<vector<int>> &ans, int c)
    {
        if(root==NULL) return;
        if(ans.size()==c) ans.push_back({});
        ans[c].push_back(root->val);
        fun(root->left, ans, c+1);
        fun(root->right, ans, c+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        fun(root, ans, 0);
        return ans;
    }
};