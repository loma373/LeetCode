class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int res=0;
        
        for(auto s:sen){
            int temp=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==' ')
                    temp++;
            }
            temp++;
            res=max(res,temp);
        }
        
        return res;
    }
};