class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Submitted for 75DaysLeetCodeChallenge DAY 24
        int i=0, j=nums.size()-1, mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]<target) i=mid+1;
            else j=mid-1;
        }
        return i;
    }
};