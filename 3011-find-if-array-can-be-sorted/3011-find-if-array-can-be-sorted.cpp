class Solution {
public:
 
   
    
    bool canSortArray(vector<int>& nums) {
        vector<int>v=nums;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            v[i]=nums[i];
        } 
        for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
          continue;  
        }
            else{
                if(__builtin_popcount(v[i])==__builtin_popcount(v[i+1]))
                    swap(v[i],v[i+1]);
                else
                    return false;
            }
        }
for(int i=n-1;i>=1;i--){
    if(v[i-1]<=v[i])
        continue;
    else{
        if(__builtin_popcount(v[i-1])==__builtin_popcount(v[i]))
            swap(v[i-1],v[i]);
        else
            return false;
    }
    
}
          
    return true;        
    }
};