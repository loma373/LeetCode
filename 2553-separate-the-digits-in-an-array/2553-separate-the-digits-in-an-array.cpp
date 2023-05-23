class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            string n=to_string(nums[i]);
            for(int j=0;j<n.size();j++){
                res.push_back(n[j]-'0');
            }
        }
        
        return res;
    }
};