class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = nums1[0];
        bool odd = 0;
        for (int x : nums1) {
            mini = min(mini, x);
            odd |= x & 1;
        }
        return (mini & 1) == odd;
    }
};