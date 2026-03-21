class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Submitted for 75DaysLeetCodeChallenge DAY 10
        vector <int> a;
        int n = nums.size();
        for(int i=0;i<n;i++) if(nums[i]!=0) a.push_back(nums[i]);
        for(int i=0;i<a.size();i++) nums[i] = a[i];
        int m = a.size();
        if(n>m) {for(int i=m;i<n;i++) nums[i] = 0;}
    }
};