class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector <int> pre(n);
        unordered_map <int,vector<int>> mp;
        for(int i=0;i<n;i++) if(nums[i]==0) nums[i]=-1;
        pre[0] = nums[0];
        for(int i=1;i<n;i++) pre[i] = pre[i-1]+nums[i];
        mp[0] = {-1, -1};
        for(int i=0;i<n;i++)
        {
            if(mp.find(pre[i])==mp.end()) mp[pre[i]] = {i,i};
            else mp[pre[i]][1] = i;
        }
        int maxi = 0;
        for(auto i:mp) maxi = max(maxi, i.second[1]-i.second[0]);
        return maxi;
    }
};