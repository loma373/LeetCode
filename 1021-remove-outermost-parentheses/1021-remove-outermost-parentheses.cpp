class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int cnt = 0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                cnt--;
            }
            if((s[i]=='(' && cnt==1) || (s[i]==')'&& cnt==0)){
                continue;
            }
            str.push_back(s[i]);
        }
        return str;
    }
};