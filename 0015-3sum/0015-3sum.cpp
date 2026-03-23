class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Submitted for 75DaysLeetCodeChallenge DAY 12
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int k = 0; k < n; k++) {
            if(k>0 && nums[k] == nums[k-1]) continue;
            int i=k+1, j=n-1;
            while(i<j) {
                int sum = nums[k] + nums[i] + nums[j];
                if(sum == 0) {
                    ans.push_back({nums[k], nums[i], nums[j]});
                    i++; j--;
                    while(i < j && nums[i] == nums[i-1]) i++;
                    while(i < j && nums[j] == nums[j+1]) j--;
                }
                else if(sum < 0) i++;
                else j--;
            }
        }
        return ans;
    }
};