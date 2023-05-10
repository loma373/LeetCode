class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> perm;
        for(int i=1;i<=m;i++){
            perm.push_back(i);
        }
        
        vector<int> ans;
        
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<perm.size();j++){
                if(perm[j]==queries[i]){
                    ans.push_back(j);
                    perm.erase(perm.begin()+j);
                    perm.insert(perm.begin()+0, queries[i]);
                    break;
                }
            }
        }
        
        return ans;
    }
};