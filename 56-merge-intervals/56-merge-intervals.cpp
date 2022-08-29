class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       /* vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        
        int x1=intervals[0][0];
        int x2=intervals[0][1];
        
        if(intervals.size()==1){
            ans.push_back(intervals[0]);
        }
        
        for(int i=1;i<intervals.size();i++){
            
            if(intervals[i][0]<=x2){
                intervals[i][0]=x1;
                x1=intervals[i][0];
                x2=intervals[i][1];
            }
            ans.push_back(intervals[i]);
        }
        
        
        
        return ans;*/
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
           
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;

    }
};