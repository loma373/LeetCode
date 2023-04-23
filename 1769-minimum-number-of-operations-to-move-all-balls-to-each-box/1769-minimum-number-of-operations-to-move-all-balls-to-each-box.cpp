class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        int op=0;
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    op+=abs(i-j);
                }
            }
            res.push_back(op);
            op=0;
        }
        
        return res;
    }
};