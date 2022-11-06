class Solution {
public:
    bool areNumbersAscending(string s) {
        int num,prev=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                num=s[i]-'0';
                if(isdigit(s[i+1])){
                    num+=num*10+(s[i+1]-'0');
                    i++;
                }
                if(num<=prev) 
                    return false;
                prev=num;
            } 
        }
            
        return true;
    }
};