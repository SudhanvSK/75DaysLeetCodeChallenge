class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int p=1,z=0;
        vector <int> ans;
        for(int i=0;i<n;i++) 
        {
            if(nums[i]!=0) p*=nums[i];
            else z++;
        }
        if(z==1)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]!=0) ans.push_back(0);
                else ans.push_back(p);
            }
        }
        else if(z>1)
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(0);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(p/nums[i]);
            }
        }
        return ans;
    }
};