class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> mp;
        char letter='a';
        for(auto s:key){
            if(s!=' ' and mp.find(s)==mp.end()){
                mp[s]=letter;
                letter++;
            }
        }
        
        string res;
        
        for(auto m:message){
            if(m!=' '){
                res+=mp[m];   
            }
            else{
                res+=" ";
            }
        }
        
        return res;
    }
};