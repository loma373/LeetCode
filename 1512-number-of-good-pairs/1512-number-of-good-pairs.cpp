class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            res+=it.second*(it.second-1)/2;
        }
        
        return res;
    }
};