class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Submitted again for 75DaysLeetCodeChallenge DAY 2
        unordered_map<int,int> c;
        for(auto i : nums) c[i]++;
        for(auto &i : c) if(i.second>=2) return true;
        return false;
    }
};
 
