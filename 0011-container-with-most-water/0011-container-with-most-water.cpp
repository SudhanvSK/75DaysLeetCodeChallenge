class Solution {
public:
    int maxArea(vector<int>& height) {
        //Submitted for 75DaysLeetCodeChallenge DAY 13
        int n = height.size();
        int i=0, j=n-1;
        int ans = 0;
        while(i<j)
        {
            int temp = (j-i)*min(height[i],height[j]);
            ans = max (ans,temp);
            if(height[i]<height[j]) i++; else j--;
        }
        return ans;
    }
};