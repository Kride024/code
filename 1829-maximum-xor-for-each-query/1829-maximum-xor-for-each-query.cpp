class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
      int n=nums.size();
        vector<int>ans(n);
        int xr=0;
        int mark=(1<<maximumBit)-1;
        for(int i=0;i<n;i++){
            xr^=nums[i];
            ans[n-1-i]=xr^mark;
        }
        return ans;
    }
};