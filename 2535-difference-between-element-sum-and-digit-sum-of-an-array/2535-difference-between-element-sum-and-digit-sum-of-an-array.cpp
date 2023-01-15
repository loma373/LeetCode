class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int aa=nums[i]%10;
                dsum+=aa;
                nums[i]=nums[i]/10;
            }
        }
        
        return abs(sum-dsum);
    }
};