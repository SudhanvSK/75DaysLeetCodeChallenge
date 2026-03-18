class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Submitted again for 75DaysLeetCodeChallenge DAY 7
        int n=nums.size()-1;
        vector<int>ans(n+1,1);
        for(int i=1;i<=n;i++){
          ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n;i>=0;i--){
            ans[i]=ans[i]*suffix;
            suffix=suffix*nums[i];
        }
        return ans;
    }
};