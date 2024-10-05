class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int mid=0;
        int high=n-1;
        while(mid<=high){
            int num=nums[mid];
            if(num==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(num==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};