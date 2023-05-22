class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> q;
        for(auto it:mp){
            q.push(make_pair(it.second,it.first));            
        }
        
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(q.top().second);
            q.pop();
        }
        
        return res;
    }
};