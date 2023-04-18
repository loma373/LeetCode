class Solution {
public:
    static bool comp(pair<int,int> &a, pair<int,int> &b){
        return a.second>b.second;
    }
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>> temp;
        
        for(int i=0;i<score.size();i++){
            temp.push_back({i,score[i][k]});
        }
        
        sort(temp.begin(),temp.end(),comp);
        
        vector<vector<int>> res;
        for(auto i:temp){
            res.push_back(score[i.first]);
        }
        
        return res;
    }
};