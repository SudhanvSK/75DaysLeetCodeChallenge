class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n1 = garbage.size(), n2 = travel.size();
        for(int i=1;i<n2;i++) travel[i]+=travel[i-1];
        int sum = 0;
        for(int i=0;i<n1;i++) sum+=garbage[i].size();
        int last_g = 0, last_p = 0, last_m = 0;
        for(int i=n1-1;i>=0;i--)
        {
            if(garbage[i].find('G')!=string::npos) last_g = max(last_g,i);
            if(garbage[i].find('P')!=string::npos) last_p = max(last_p,i);
            if(garbage[i].find('M')!=string::npos) last_m = max(last_m,i);
        }
        if(last_g!=0) sum+=travel[last_g-1];
        if(last_p!=0) sum+=travel[last_p-1];
        if(last_m!=0) sum+=travel[last_m-1];
        return sum;
    }
};