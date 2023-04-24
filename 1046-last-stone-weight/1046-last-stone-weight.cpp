class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto i:stones)
            p.push(i);
        
        while(p.size()>1){
            int a=p.top();
            p.pop();
            int b=abs(p.top()-a);
            p.pop();
            
            if(b!=0)
                p.push(b);
        }
        if(!p.empty())
            return p.top();
        
        return 0;
    }
};