class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string res=s;

        for(int i=0;i<n;i++){
            res[indices[i]]=s[i];
        }

        return res;
    }
};