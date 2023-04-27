class Solution {
public:
    int findCenter(vector<vector<int>>& arr) {
        map<int ,int> map;
        for(int i=0;i<2;i++){
            map[arr[i][0]]++;
            map[arr[i][1]]++;
        }
        
        int ans;
        for(auto &[x,y]:map)
            if(y==2)ans =x;
        
        return ans;
    }
};