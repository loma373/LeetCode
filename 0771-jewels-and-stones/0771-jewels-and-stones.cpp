class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(char j:jewels){
            mp[j]++;
        }
        int res=0;
        for(char s:stones){
            if(mp.find(s)!=mp.end())
                res++;
        }
        
        return res;
    }
};