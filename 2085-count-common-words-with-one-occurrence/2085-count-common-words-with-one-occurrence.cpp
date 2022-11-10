class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1,mp2;
        set<string> s;

        for(auto w:words1){
            mp1[w]++;
            s.insert(w);
        }

        for(auto w:words2){
            mp2[w]++;
            s.insert(w);
        }
        int res=0;
        for(auto it:s){
            if(mp1[it]==1 and mp2[it]==1)
                res++;
        }

        return res;
    }
};