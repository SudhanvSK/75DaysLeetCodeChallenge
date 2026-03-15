class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //Submitted for 75DaysLeetCodeChallenge DAY 4
        int n = nums.size();
        vector <int> ans;
        map <int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(int i=1;i<=n;i++) if(mp[i]==0) ans.push_back(i);
        return ans;
    }
};