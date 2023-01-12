class Solution {
public:
    vector<int> dfs(int currNode,int parent, vector<vector<int>>& adj,string& labels, vector<int>& res){
        vector<int> nodeCounts(26);
        nodeCounts[labels[currNode]-'a']=1;
        
        for(auto child:adj[currNode]){
            if(child==parent)
                continue;
            
            vector<int> childCounts=dfs(child,currNode,adj,labels,res);
            for(int i=0;i<26;i++){
                nodeCounts[i]+=childCounts[i];
            }
        }
        res[currNode]=nodeCounts[labels[currNode]-'a'];
        return nodeCounts;
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> res(n,0);
        
        dfs(0,-1,adj,labels,res);
        
        return res;
    }
    
};