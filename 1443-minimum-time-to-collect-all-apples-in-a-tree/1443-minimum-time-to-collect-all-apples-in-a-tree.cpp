class Solution {
public:
    int dfs(int currNode,int parent, vector<vector<int>>& adj, vector<bool>& hasApple){
        int tt=0,ct=0;
        for(auto child:adj[currNode]){
            if(child==parent)
                continue;
            
            ct=dfs(child,currNode,adj,hasApple);
            
            if(ct or hasApple[child])
                tt+=ct+2;
        }
        
        return tt;
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        return dfs(0,-1,adj,hasApple);
    }
};