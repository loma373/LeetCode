class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res;
        unordered_set<int> s;
        int count=0;
        int n=A.size();
        for(int i=0;i<n;i++){
            if(A[i]==B[i]){
                count++;
            }
            else{
                if(s.find(A[i])!=s.end())
                    count++;
                else
                    s.insert(A[i]);
                
                if(s.find(B[i])!=s.end())
                    count++;
                else
                    s.insert(B[i]);
            }
            
            res.push_back(count);
        }
        
        return res;
    }
};