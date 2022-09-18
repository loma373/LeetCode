class Solution {
public:
    bool isCycle(int i,unordered_map<int,vector<int>>& adj, vector<bool>& vis, vector<bool>& recur){
        recur[i]=true;
        vis[i]=true;
        for(auto it:adj[i]){
            if(!vis[it] and isCycle(it,adj,vis,recur))
                return true;
            if(recur[it]==true)
                return true;
        }
        
        recur[i]=false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& p) {
        vector<bool> vis(numCourses,false);
        vector<bool> recur(numCourses,false);
        unordered_map<int,vector<int>> adj;
        
        for(int i=0;i<p.size();i++){
            int u=p[i][0];
            int v=p[i][1];
            adj[u].push_back(v);
        }
        
        for(int i=0;i<numCourses;i++){
            if(!vis[i] and isCycle(i,adj,vis,recur))
                return false;
        }
        
        return true;
    }
};