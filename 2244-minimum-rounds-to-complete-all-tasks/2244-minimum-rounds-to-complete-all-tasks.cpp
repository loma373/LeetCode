class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int count=0;
        for(auto it:mp){
            int t=it.second;
            
            if(t==1)
                return -1;
            if(t%3==0)
                count+=t/3;
            else if(t%3==0){
                count+=t/3;
                count++;
            }
            else{
                count+=t/3;
                count++;
            }
        }
        
        return count;
    }
};