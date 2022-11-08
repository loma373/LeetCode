class Solution {
public:
    char shift(char ch,int x){
        return ch+x-'0';
    }

    string replaceDigits(string s) {
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                s[i]=shift(s[i-1],s[i]);
            }
        }

        return s;
    }
};