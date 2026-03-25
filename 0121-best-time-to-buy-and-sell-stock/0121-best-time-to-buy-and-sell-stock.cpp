class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Submitted for 75DaysLeetCodeChallenge DAY 14
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);  
            maxProfit = max(maxProfit, prices[i] - minPrice); 
        }
        return maxProfit;
    }
};