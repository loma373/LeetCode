class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,bool> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]-diff] and mp[nums[i]+diff])
                res++;
        }
        
        return res;
    }
};