class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0,countl=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L')
                countl++;
            else
                countr++;
            
            if(countl==countr){
                res++;
                countl=0;
                countr=0;
            }
        }

        return res;
    }
};