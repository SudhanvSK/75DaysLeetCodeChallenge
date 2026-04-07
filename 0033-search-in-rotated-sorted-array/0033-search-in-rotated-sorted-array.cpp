class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Submitted for 75DaysLeetCodeChallenge DAY 27
        int i = 0, j = nums.size()-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[mid]>nums[j]) i = mid + 1;
            else j = mid;
        }
        int low2 = i, high2 = nums.size()-1;
        int low1 = 0, high1 = i-1;
        while(low1<=high1)
        {
            int mid = low1 + (high1-low1)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low1 = mid+1;
            else high1 = mid-1;
        }
        while(low2<=high2)
        {
            int mid = low2 + (high2-low2)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low2 = mid+1;
            else high2 = mid-1;
        }
        return -1;
    }
};