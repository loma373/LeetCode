class Solution {
public:
    int maxDepth(string str) {
        int temp=0;
        int res;
        for(char s:str){
            if(s=='(')
                temp++;
            else if(s==')')
                temp--;
            res=max(res,temp);
        }
        
        return res;
    }
};