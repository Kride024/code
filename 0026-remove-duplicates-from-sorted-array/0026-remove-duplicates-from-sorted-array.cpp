class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //two pointer approach
        int n=nums.size();
        int i=0;
        int j;
for(j=1;j<n;j++){
    if(nums[i]!=nums[j]){
        nums[i+1]=nums[j];
        i++;
    }

}
return i+1;
    }
};