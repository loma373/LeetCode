class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int> mp;
        int x=0,y=0;
        mp[{x,y}]++;
        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                y++;
            }
            if(path[i]=='S'){
                y--;
            }
            if(path[i]=='E'){
                x++;
            }
            if(path[i]=='W'){
                x--;
            }
            
            mp[{x,y}]++;
            if(mp[{x,y}]>1)
                return true;
        }
        
        return false;
    }
};