class Solution {
public:
    int res=0;
    
    void countSteps(int n){
        if(n==0)
            return;
        
        if(n%2==0){
            n/=2;
            res++;
        }
        else{
            n--;
            res++;
        }
        
        countSteps(n);
    }
    
    int numberOfSteps(int num) {
        countSteps(num);
        
        return res;
    }
};