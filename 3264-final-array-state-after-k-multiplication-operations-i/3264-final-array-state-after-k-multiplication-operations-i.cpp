class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        int mini=INT_MAX;
        int index=-1;
        while(k--){
            mini=INT_MAX;
            for(int i=0;i<n;i++){
                if(nums[i]<mini){
                    mini=nums[i];
                    index=i;
                }
            }
            nums[index]=mini*multiplier;
        }
        return nums;
        
    }
};