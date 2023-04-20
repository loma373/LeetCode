class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> mp;
        
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>> res;
        
        for(auto it:mp){
            vector<int> temp;
            int count=0;
            
            for(int i=0;i<it.second.size();i++){
                temp.push_back(it.second[i]);
                count++;
                
                if(count==it.first){
                    res.push_back(temp);
                    count=0;
                    temp.clear();
                }
            }
        }
        
        return res;
    }
};