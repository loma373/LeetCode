class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> res;
        int lsum[nums.size()];
        int rsum[nums.size()];
        
        int x=0;
        for(int i=0;i<nums.size();i++){
            lsum[i]=x;
            x+=nums[i];
        }
        
        x=0;
        for(int i=nums.size()-1;i>=0;i--){
            rsum[i]=x;
            x+=nums[i];
        }
        
        
        for(int i=0;i<nums.size();i++){
            res.push_back(abs(lsum[i]-rsum[i]));
        }
        
        return res;
    }
};