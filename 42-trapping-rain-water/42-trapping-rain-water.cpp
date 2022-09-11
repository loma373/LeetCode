class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        
        vector<int> leftmax(n),rightmax(n);
        
        leftmax[0]=height[0];
        for(int i=1;i<height.size();i++){
            leftmax[i]=max(height[i],leftmax[i-1]);
        }
        
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(height[i],rightmax[i+1]);
        }
        
        for(int i=1;i<n;i++){
            res+=min(leftmax[i],rightmax[i])-height[i];
        }
        
        return res;
    }
};