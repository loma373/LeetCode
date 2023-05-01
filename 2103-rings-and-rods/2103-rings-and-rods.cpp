class Solution {
public:
    int countPoints(string rings) {
        map<int, set<char>> mp;
        
        for(int i=0;i<rings.size();i+=2){
            mp[rings[i+1]].insert(rings[i]);
        }
        
        int res=0;
        for(auto it:mp){
            if(it.second.size()==3)
                res++;
        }
        
        return res;
    }
};