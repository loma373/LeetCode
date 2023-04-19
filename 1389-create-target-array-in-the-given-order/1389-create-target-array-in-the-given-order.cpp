class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size()-1;
        vector<int> res;
        
        for(int i=0;i<=n;i++){
            res.insert(res.begin()+index[i],nums[i]);
        }
        
        return res;
    }
};