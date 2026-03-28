class Solution {
public:
    int characterReplacement(string s, int k) {
        // Submitted for 75DaysLeetCodeChallenge DAY 17
        vector<int> count(26, 0);
        int left = 0, maxf = 0, ans = 0;
        for (int right = 0; right < s.size(); right++) {
            count[s[right] - 'A']++;
            maxf = max(maxf, count[s[right] - 'A']);
            while ((right - left + 1) - maxf > k) {
                count[s[left] - 'A']--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};