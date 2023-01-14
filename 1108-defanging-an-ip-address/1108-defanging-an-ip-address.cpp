class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        
        for(char it:address){
            if(it=='.'){
                res+="[.]";
            }
            else{
                res+=it;
            }
        }
        
        return res;
    }
};