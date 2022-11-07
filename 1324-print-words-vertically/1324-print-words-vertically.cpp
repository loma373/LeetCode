class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> res,tres;
        int maxsize=INT_MIN;
        //cout<<"hello";
        s+=' ';
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                cout<<temp;
                tres.push_back(temp);
                int len=temp.size();
                maxsize=max(maxsize,len);
                temp="";
            }
            else
                temp+=s[i];
        }

        for(int i=0;i<maxsize;i++){
            string temp;
            for(auto &it:tres){
                if(i>=it.size())
                    temp.push_back(' ');
                else    
                    temp.push_back(it[i]);
            }
            int n=temp.size()-1;
            while(temp[n]==' '){
                temp.pop_back();
                n--;
            }
            res.push_back(temp);
        }

        return res;
    }
};