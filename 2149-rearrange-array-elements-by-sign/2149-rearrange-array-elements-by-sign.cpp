class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int N=nums.size();
        vector<int>v(N,0);
        int p=0;
        int n=1;
        for(int i=0;i<N;i++){
            if(nums[i]<0){
                v[n]=nums[i];
                n+=2;
            }
            else{
                v[p]=nums[i];
                p+=2;
            }
        }
        return v;
    }
};