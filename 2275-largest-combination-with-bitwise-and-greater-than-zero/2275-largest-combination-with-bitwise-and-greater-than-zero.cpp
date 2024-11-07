class Solution {
public:
    int largestCombination(vector<int>& candidates) {
       vector<int>v(24,0);
        int n=candidates.size();
        for(int nums:candidates){
            for(int j=0;j<24;j++){
                if((nums&(1<<j))!=0)
                    v[j]++;
            }
        } int maxi=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=maxi)
            {
                maxi=v[i];
                
            }
        }
        return maxi;
    }
};