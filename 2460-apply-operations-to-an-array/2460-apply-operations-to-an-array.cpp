class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count0=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }

        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                res.push_back(nums[i]);
            else
             count0++;
        }

        while(count0){
            res.push_back(0);
            count0--;
        }

        return res;
    }
};