class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Submitted for 75DaysLeetCodeChallenge DAY 47
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-1;i+=2) if(nums[i+1]!=nums[i]) return nums[i];
        return nums[n-1];
    }
};