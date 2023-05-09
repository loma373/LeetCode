class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        
        int r1=0,c1=0;
        int r2=matrix.size()-1,c2=matrix[0].size()-1;
        
        while(r1<=r2 and c1<=c2){
            for(int i=c1;i<=c2;i++){
                res.push_back(matrix[r1][i]);
            }
            
            for(int i=r1+1;i<=r2;i++){
                res.push_back(matrix[i][c2]);
            }
            
            for(int i=c2-1;i>=c1;i--){
                if(r2==r1)
                    break;
                res.push_back(matrix[r2][i]);
            }
            
            for(int i=r2-1;i>r1;i--){
                if(c2==c1)
                    break;
                res.push_back(matrix[i][c1]);
            }
            
            r1++;
            c1++;
            r2--;
            c2--;
        }
        
        return res;
    }
};