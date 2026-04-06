class Solution {
public:
    int findMin(vector<int>& nums) {
        // Submitted for 75DaysLeetCodeChallenge DAY 26
        int i = 0, j = nums.size()-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[mid]>nums[j]) i = mid + 1;
            else j = mid;
        }
        return nums[i];
    }
};