class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) 
    {
        vector<vector<string>> ans;
        map<int, map<string, int>> m;
        set<string> food;
        vector<string> first;
        for(int i = 0; i < orders.size(); i++)
        {
            food.insert(orders[i][2]);
            m[stoi(orders[i][1])][orders[i][2]]++;
        }
        first.push_back("Table");
        for(string i : food) first.push_back(i);
        ans.push_back(first);
        for(auto it : m)
        {
            vector<string> tmp;
            tmp.push_back(to_string(it.first));
            for(auto item : food)
            {
                if(it.second.find(item) != it.second.end()) tmp.push_back(to_string(it.second[item]));
                else tmp.push_back("0");
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
