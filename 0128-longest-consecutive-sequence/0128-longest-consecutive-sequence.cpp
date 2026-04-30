class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 50

    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set <int> s;
        for(auto i:nums) s.insert(i);
        vector <int> v;
        for(auto i:s) v.push_back(i);
        int c = 0, m = 0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]==1) c++;
            else {m = max(m,c); c = 0;}
        }
        return max(c,m) + 1;
    }
};