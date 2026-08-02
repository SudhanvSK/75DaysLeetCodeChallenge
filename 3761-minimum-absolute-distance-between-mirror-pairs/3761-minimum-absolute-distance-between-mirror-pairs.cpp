class Solution {
public:
    int reverse(int n)
    {
        vector<int> v;
        bool z = true;
        while(n!=0)
        {
            int d = n%10;
            if(d!=0) z = false;
            if(!z) v.push_back(d);
            n/=10;
        }
        int p = v.size()-1;
        int rev = 0;
        for(int i:v) rev+=i*pow(10,p--);
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