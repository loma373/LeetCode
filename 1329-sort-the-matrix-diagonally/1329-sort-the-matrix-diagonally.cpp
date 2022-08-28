class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> temp;
        int n=mat.size();
        int m=mat[0].size();
        
        for(int r=0;r<n;r++){
            temp.clear();
            for(int j=0,i=r;j<m and i<n;j++,i++){
                temp.push_back(mat[i][j]);
            }
            sort(temp.begin(),temp.end());
            for(int j=0,i=r;j<m and i<n;j++,i++){
                mat[i][j]=temp[j];
            }
        }
        
        for(int c=1;c<m;c++){
            temp.clear();
            for(int i=0,j=c;i<n and j<m;i++,j++){
                temp.push_back(mat[i][j]);
            }
            sort(temp.begin(),temp.end());
            for(int i=0,j=c;i<n and j<m;i++,j++){
                mat[i][j]=temp[i];
            }
        }
        
        return mat;
    }
};