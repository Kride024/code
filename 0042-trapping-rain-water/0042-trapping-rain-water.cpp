class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
        int l=0;
        int r=n-1;
        int lMax=0;
        int rMax=0;
        int total=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=lMax){
                    lMax=height[l];
                }
                else{
                    total+=lMax-height[l];
                }
            l++;
            }
            else{
                if(height[r]>=rMax){
                    rMax=height[r];
                }
                else{
                    total+=rMax-height[r];
                }
            r--;
            }
        }
    return total; 
    }
};