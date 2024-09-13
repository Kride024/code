class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        for(auto it=nums.begin()+1;it!=nums.end();){
            if(*(it-1)==*it)
            nums.erase(it-1);
            else
            it++;
        }
        int k=nums.size();
        return k;

    }
};