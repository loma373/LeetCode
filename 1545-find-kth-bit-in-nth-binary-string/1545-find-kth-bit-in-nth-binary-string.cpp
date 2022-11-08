class Solution {
public:
    string value(int n){
        if(n==1)
            return "0";
        string ans=value(n-1);
        string k=ans+"1";
        for(int i=0;i<ans.length();++i){
            if(ans[i]=='0')
                ans[i]='1';
            else
                ans[i]='0';
        }
        reverse(ans.begin(),ans.end());
        k+=ans; 
        return k;
    }
    char findKthBit(int n, int k) {
        string ans= value(n);
        
        return ans[k-1];
    }
};