class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int cnt=0,i,j;
        for(j=0;j<m;j++){
            for(i=1;i<n;i++){
             if(strs[i][j]-strs[i-1][j]<0){
                 cnt++;
                break;
            }
        }
        }
        return cnt;
    }
};