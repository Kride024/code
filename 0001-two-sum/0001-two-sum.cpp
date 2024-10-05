class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>v;
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int rem=target-num;
            if(mpp.find(rem)!=mpp.end())
            {
                v.push_back(mpp[rem]);
                v.push_back(i);
                return v;
            }
            mpp[nums[i]]=i;
        }
       return v; 
    }
};