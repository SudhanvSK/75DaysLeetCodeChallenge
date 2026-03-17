class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Submitted again for 75DaysLeetCodeChallenge DAY 6
        int n = nums.size();
        unordered_map<int,int> m;
        for(auto i : nums) m[i]++;
        vector <pair<int,int>> v;
        for (auto &i : m) v.push_back({i.second,i.first});
        sort(v.begin(),v.end());
        vector <int> ans;
        int j=v.size()-1;
        for(int i=0;i<k;i++) ans.push_back(v[j--].second);
        return ans;
    }
};