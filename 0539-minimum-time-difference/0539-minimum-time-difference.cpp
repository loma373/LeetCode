class Solution {
public:
    int findMinDifference(vector<string>& time) {
        vector<int> times;

        for(int i=0;i<time.size();i++){
            times.push_back(stoi(time[i].substr(0,2))*60+stoi(time[i].substr(3,5)));
        }

        sort(times.begin(),times.end());
        int res=INT_MAX;

        for(int i=1;i<times.size();i++){
            res=min(res,times[i]-times[i-1]);
        }
        res=min(res,times[0]-times[times.size()-1]+24*60);

        return res;
    }
};