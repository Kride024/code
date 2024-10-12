class Solution {
public:

    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int>ans(n,0);
        if(j==0){
            for(int i=1;i<nums[0];i++){
if((i |(i+1))==nums[0]){
ans[0]=i;
 break;}
}
if(ans[0]==0)
ans[0]=-1;
        }
        int pre=nums[0];
        if(n>1)
        while(j<n){
           if(j==0)
           j++;
            int num=nums[j];
            for(int i=1;i<num;i++)
            {
                if((i |(i+1))==num&& i<num){
                    ans[j]=i;
                    break;
                    
                }
            } pre=num;
            if(ans[j]==0)
            ans[j]=-1;
            j++;
        
        }
        return ans;
    }
};