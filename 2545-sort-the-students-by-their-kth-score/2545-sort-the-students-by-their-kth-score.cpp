class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size()-1;i++)
        {
            int maxi = score[i][k], sw = i;
            for(int j=i+1;j<score.size();j++) if(score[j][k]>maxi) {sw = j; maxi = score[j][k];}
            swap(score[i],score[sw]);
        }
        return score;
    }
};