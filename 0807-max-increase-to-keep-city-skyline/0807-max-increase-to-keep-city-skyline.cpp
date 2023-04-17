class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int res=0;
        int n=grid.size();
        vector<int> rMax(n);
        vector<int> cMax(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rMax[i]=max(grid[i][j],rMax[i]);
                cMax[j]=max(grid[i][j],cMax[j]);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res+=min(rMax[i],cMax[j])-grid[i][j];
            }
        }
        
        return res;
    }
};