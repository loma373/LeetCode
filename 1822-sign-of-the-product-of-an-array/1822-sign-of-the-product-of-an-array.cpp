class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res=1;
        for(auto i:nums){
            if(i>0)
                res*=1;
            else if(i<0)
                res*=-1;
            else 
                return 0;
        }
        
        return res;
    }
};