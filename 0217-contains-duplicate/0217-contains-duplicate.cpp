class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> c;
        for(auto i : nums) c[i]++;
        for(auto &i : c) if(i.second>=2) return true;
        return false;
    }
};