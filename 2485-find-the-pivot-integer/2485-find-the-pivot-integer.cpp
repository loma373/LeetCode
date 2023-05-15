class Solution {
public:
    int pivotInteger(int n) {
        int tsum=n*(n+1)/2;
        
        for(int i=1;i<=n;i++){
            int presum=i*(i+1)/2;
            int postsum=tsum-presum+i;
            if(postsum==presum)
                return i;
        }
        
        return -1;
    }
};