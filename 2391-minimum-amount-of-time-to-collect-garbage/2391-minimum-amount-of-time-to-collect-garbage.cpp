class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m=0,p=0,g=0;
        int count=0;

        for(int i=0;i<garbage.size();i++){
            for(auto c:garbage[i]){
                count++;
                if(c=='M')
                    m=i;
                else if(c=='G')
                    g=i;
                else    
                    p=i;
            }
        }

        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }

        if(m>0)
            count+=travel[m-1];
        if(g>0)
            count+=travel[g-1];
        if(p>0)
            count+=travel[p-1];

        return count;

    }
};