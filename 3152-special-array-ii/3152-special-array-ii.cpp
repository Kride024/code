class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
      vector<int>Index_sum(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            if((nums[i-1]&1)==(nums[i]&1))
                Index_sum[i]=1;
            else{
                Index_sum[i]=Index_sum[i-1]+1;
            }
        }
        vector<bool>ans;
        for(auto quary:queries){
            int start=quary[0];
            int end=quary[1];
            int size=end-start+1;
            if(size<=Index_sum[end])
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
        
        
        
        
    }
};