class Solution {
public:
    static bool comp(vector<int>& a,vector<int>& b){
        if(a[0]==b[0])
            return a[1]>b[1];
        
        return a[0]<b[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& env) {
        sort(env.begin(),env.end(),comp);
        
        vector<int> ans;
        ans.push_back(env[0][1]);
        for(int i=0;i<env.size();i++){
            if(env[i][1]>ans.back()){
                ans.push_back(env[i][1]);
            }
            else{
                int it=lower_bound(ans.begin(),ans.end(),env[i][1])-ans.begin();
                ans[it]=env[i][1];
            }
        }
        
        return ans.size();
    }
};