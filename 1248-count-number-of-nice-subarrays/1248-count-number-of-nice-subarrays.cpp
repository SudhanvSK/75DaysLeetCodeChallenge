class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, sum = 0;
        map <int,int> mp;
        for(int i=0;i<n;i++) (nums[i]%2) ? nums[i] = 1 : nums[i] = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};