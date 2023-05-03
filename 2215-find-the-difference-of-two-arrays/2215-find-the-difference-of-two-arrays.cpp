class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        
        vector<int> d1,d2;
        for(int n:s1){
            if(s2.count(n)==0)
                d1.push_back(n);
        }
        
        for(int m:s2){
            if(s1.count(m)==0)
                d2.push_back(m);
        }
        
        return {d1,d2};
    }
};