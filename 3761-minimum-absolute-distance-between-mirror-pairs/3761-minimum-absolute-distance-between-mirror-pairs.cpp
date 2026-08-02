class Solution {
public:
    int reverse(int n)
    {
        int rev = 0;
        while (n!=0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX, n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.count(nums[i])) ans = min(ans,abs(i-mp[nums[i]]));
            mp[reverse(nums[i])] = i;
        }
        if(ans==INT_MAX) ans = -1; return ans; 
    }
};