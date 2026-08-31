class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = max_element(nums.begin(), nums.end()) - nums.begin();
        int mini = min_element(nums.begin(), nums.end()) - nums.begin();
        int a = max(maxi,mini);
        int b = min(maxi,mini);
        int n = nums.size();
        return min(a+1, min(n-b, b+1+n-a));
    }
};