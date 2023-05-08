class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int res=arrivalTime+delayedTime;
        
        if(res>=24){
            res-=24;
        }
        
        return res;
    }
};