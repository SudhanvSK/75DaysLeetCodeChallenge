class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n) return -1;
        if(s==0) return 0;
        int ans = 0;
        int nines = s/9;
        int p = n-1;
        while(nines--) ans += 9*(pow(10,p--));
        int rem = s%9;
        if(rem!=0) ans+=rem*pow(10,p--);
        return ans;
    }
};