class Solution {
public:
    bool isPalindrome(string s) {
        //Submitted for 75DaysLeetCodeChallenge DAY 8
        int m=s.size();
        string k;
        for(int i=0;i<m;i++)
            if(isalnum(s[i])) k+=tolower(s[i]);
        int i,j,n=k.size(); 
        for(i=0,j=n-1;i<n,j>=0;i++,j--)
            if(k[i]!=k[j]) return false;
        return true;
    }
};
