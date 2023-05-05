class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        
        for(auto a:allowed){
            mp[a]++;
        }
        int res=0;
        
        for(string w:words){
            int temp=0;
            for(char i:w){
                if(mp.find(i)!=mp.end())
                    temp++;
            }
            if(temp==w.size())
                res++;
        }
        
        return res;
    }
};