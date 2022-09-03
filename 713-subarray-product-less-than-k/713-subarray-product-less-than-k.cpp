class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int prod=1;
        int left=0,right=0;
        
        while(right<=nums.size()-1){
            prod*=nums[right];
            
            while(prod>=k and left<nums.size()){
                prod/=nums[left];
                left++;
            }
            
            if(right-left>=0)
                ans+=right-left+1;
            
            right++;
        }
        
        return ans;
    }
};