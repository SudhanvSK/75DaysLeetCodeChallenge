class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector <int> v,ans;
        for(int i=0;i<n;i++) if(boxes[i]=='1') v.push_back(i+1);
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum=0;
            for(int j=0;j<v.size();j++) sum+=(abs(v[j]-i-1));
            ans.push_back(sum);
        }
        return ans;
    }
};