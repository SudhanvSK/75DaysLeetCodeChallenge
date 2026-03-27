class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Submitted for 75DaysLeetCodeChallenge DAY 16
        set<char> st;
        int ans = 0, j = 0;

        for (int i = 0; i < s.size(); i++) {
            while (st.find(s[i]) != st.end()) {
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};