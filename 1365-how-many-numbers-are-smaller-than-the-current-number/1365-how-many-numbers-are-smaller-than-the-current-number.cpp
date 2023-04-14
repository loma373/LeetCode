class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            int pivot=nums[i];
            int cnt=0;
            int j=0;
            while(j<n){
                if(nums[j]<pivot){
                    cnt++;
                    j++;
                }
                else{
                    j++;
                }
            }
            temp.push_back(cnt);
        }
        return temp;
    }
};