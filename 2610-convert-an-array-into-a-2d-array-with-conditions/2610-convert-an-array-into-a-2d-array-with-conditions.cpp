class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        
        vector<vector<int>> res;
        while(!mp.empty()){
            vector<int> temp;
            for(auto i : mp) 
                temp.push_back(i.first);
            for(int i : temp) {
                if(!--mp[i]) 
                    mp.erase(i);
            }
            res.push_back(temp);
        }
        
        return res;
    }
};