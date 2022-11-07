class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> mp;

        for(int i=0;i<bills.size();i++){
            mp[bills[i]]++;
            if(bills[i]-5==0)
                continue;
            else if(bills[i]-5==5){
                if(mp[5]<0)
                    return false;
                mp[5]--;
            }
            else if(bills[i]-5==15){
                if(mp[10]>0 and mp[5]>0){
                    mp[10]--;
                    mp[5]--;
                }
                else if(mp[5]>=3){
                    mp[5]-=3;
                }
                else
                    return false;
            }
        }

        return true;
    }
};