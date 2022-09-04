class Solution {
public:
    string reverseWords(string s){
        if(s.size()==0)
            return s;
        stack<string> st;
       
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
                continue;
            
            string temp;
            
            while(i<s.size() and s[i]!=' '){
                temp+=s[i];
                i++;
            }
            st.push(temp);
        }
        
        string res;
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()){
                res+=' ';
            }
        }
        
        return res;
    }
};