class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            for(int j=0;j<nums[i];j++){
                res.push_back(nums[i+1]);
            }
        }
        
        return res;
    }
};