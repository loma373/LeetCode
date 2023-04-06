class Solution {
public:
    bool dfs(int r,int c,vector<vector<int>>& grid){
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size())
            return false;
        if(grid[r][c]==1)
            return true;
        
        grid[r][c]=1;
        
        int d1=dfs(r+1,c,grid);
        int d2=dfs(r-1,c,grid);
        int d3=dfs(r,c+1,grid);
        int d4=dfs(r,c-1,grid);
        
        return (d1 and d2 and d3 and d4);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)
                    if(dfs(i,j,grid))
                        ans++;
            }
        }
        
        return ans;
    }
};