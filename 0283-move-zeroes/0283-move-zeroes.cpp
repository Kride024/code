class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>li;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
            li.push_back(nums[i]);

        }
        int Zsize=li.size();
        for(int i=0;i<Zsize;i++){
            nums[i]=li[i];
        }
        for(int i=Zsize;i<n;i++){
            nums[i]=0;
        }
        
        
        
        
        
        
        
        /*int index;
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
        }*/
        
    }
};