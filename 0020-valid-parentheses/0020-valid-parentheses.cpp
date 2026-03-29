class Solution {
public:
    bool isValid(string s) {
        // Submitted for 75DaysLeetCodeChallenge DAY 18
        stack <int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else if(st.empty()) return false;
            else 
            {
                char temp = st.top();
                st.pop();
                if((temp=='('&&s[i]!=')')||(temp=='{'&&s[i]!='}')||(temp=='['&&s[i]!=']')) return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};