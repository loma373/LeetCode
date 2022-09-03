class Solution {
public:
    void solve(int size,int k,int num,int digit,vector<int>& res){
        if(size==0){
            res.push_back(num);
            return;
        }
        
        for(int i=0;i<10;i++){
            if(abs(i-digit)==k){
                solve(size-1,k,num*10+i,i,res);
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        
        for(int i=1;i<10;i++){
            solve(n-1,k,i,i,res);
        }
        
        return res;
    }
};