class Solution {
public:
    string toLowerCase(string str) {
        for(int s=0;s<str.size();s++){
            if(str[s]>='A' and str[s]<='Z'){
                str[s]=str[s]-'A'+'a';
            }
        }
        
        return str;
    }
};