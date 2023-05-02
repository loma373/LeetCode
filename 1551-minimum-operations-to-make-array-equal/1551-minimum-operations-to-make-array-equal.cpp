class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(2*i)+1;
        }
        int res=0;
        sum/=n;
        //int target=sum/n;
        for(int i=0;i<n/2;i++){
            res+=sum-(2*i)-1;
        }
        
        return res;
        
    }
};