class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int res;
        
        while(num>0){
            int x=num%10;
            if(n%x==0)
                res++;
            
            num/=10;
        }
        
        return res;
    }
};