class Solution {
public:
    static bool comp(vector<int>&a, vector<int> &b){
        if(a[0]==b[0])
            return a[1]>b[1];
        
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),comp);
        int res=0;
        
        int maxDef=prop[prop.size()-1][1];
        
        for(int i=prop.size()-2;i>=0;i--){
            if(maxDef>prop[i][1])
                res++;
            
            maxDef=max(maxDef,prop[i][1]);
        }
        
        return res;
    }
};