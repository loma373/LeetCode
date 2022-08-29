class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        if(grid[r][c]=='1'){
            grid[r][c]='2';
            
            if(r>0)
                dfs(grid,r-1,c);
            if(c>0)
                dfs(grid,r,c-1);
            if(r<grid.size()-1)
                dfs(grid,r+1,c);
            if(c<grid[0].size()-1)
                dfs(grid,r,c+1);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='2' or grid[i][j]=='0')
                    continue;
                else{
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        
        return count;
    }
};