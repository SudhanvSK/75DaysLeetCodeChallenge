class Solution {
    // Submitted for 75DaysLeetCodeChallenge DAY 39
public:

    int solve(struct TreeNode* root, int* diameter) {
    if (root == NULL) return 0;
    int lh = solve(root->left, diameter);
    int rh = solve(root->right, diameter);
    if (lh + rh > *diameter) *diameter = lh + rh;
    return max(lh, rh) + 1;
}

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        solve(root, &diameter);
        return diameter;
    }
};