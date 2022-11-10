class Solution {
public:
    bool check(string q, vector<string> dictionary){
        for(auto dict:dictionary){
            int c=0;
            for(int i=0;i<dict.size();i++){
                if(q[i]!=dict[i])
                    c++;
            }
            if(c<=2)
                return true;
        }

        return false;
    }

    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;

        for(auto q:queries){
            if(check(q,dictionary))
                res.push_back(q);
        }        

        return res;
    }
};