class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Submitted for 100DaysLeetCodeChallenge DAY 48
        map <int,int> mp;
        for(auto i:nums) mp[i]++;
        int req = nums.size()/2 + 1, ans;
        for(auto i:mp) if(i.second>=req) ans = i.first;
        return ans;
    }
};