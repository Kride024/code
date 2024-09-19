class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                index=i;
                break;
            }
        }
        
        int j=index;
        for(int i=index+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
    }
};