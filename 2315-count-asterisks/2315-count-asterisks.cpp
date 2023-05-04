class Solution {
public:
    int countAsterisks(string str) {
        bool bar=false;
        int res=0;
        for(char s:str){
            if(s=='|' and bar==false)
                bar=true;
            else if(s=='|' and bar==true)
                bar=false;
            
            if(s=='*' and bar==false)
                res++;
        }
        
        return res;
    }
};