class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = nums1[0];
        int even = 0;
        for (int x : nums1) {
            mini = min(mini, x);
            if(x%2 == 0) even++;
        }
        return (mini & 1) || (even == nums1.size());
    }
};