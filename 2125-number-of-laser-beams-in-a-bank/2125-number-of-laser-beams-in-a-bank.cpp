class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res,prev=0;
        
        for(auto b:bank){
            int curr=0;
            for(int i=0;i<b.size();i++){
                if(b[i]=='1')
                    curr++;
            }
            if(curr!=0){
                res+=prev*curr;
                prev=curr;
            }
        }
        
        return res;
    }
};