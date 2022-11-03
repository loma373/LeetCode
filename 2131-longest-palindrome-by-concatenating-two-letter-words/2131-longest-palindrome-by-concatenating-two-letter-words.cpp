class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int res=0;
        map<string,int> mp;

        for(auto s:words){
            string p=s;
            reverse(p.begin(),p.end());
            if(mp[p]>0){
                res+=4;
                mp[p]--;
            }
            else{
                mp[s]++;
            }
        }

        for(auto it:mp){
            if(it.first[0]==it.first[1] and it.second>0)
                return res+2;
        }

        return res;
    }
};