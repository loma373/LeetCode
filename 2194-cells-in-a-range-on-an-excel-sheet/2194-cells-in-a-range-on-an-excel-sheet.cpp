class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        
        for(char a=s[0];a<=s[3];a++){
            for(char i=s[1];i<=s[4];i++){
                string temp="";
                temp=temp+a+i;
                res.push_back(temp);
            }
        }
        
        return res;
    }
};