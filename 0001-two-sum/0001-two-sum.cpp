class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Submitted again for 75DaysLeetCodeChallenge DAY 1
        int n = nums.size();
        int a,b;
        for(int i=0;i<n;i++)
        {
            bool ok = false;
            for(int j=0;j<n;j++)
            {
                if(nums[i]+nums[j]==target&&i!=j)
                {
                    ok = true;
                    a = i;
                    b = j;
                    break;
                }
            }
            if(ok) break;
        }
        vector <int> v(2);
        v[0]=a;v[1]=b;
        return v;
    }
};