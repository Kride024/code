class Solution {
public:
    int storii(string s){
        int num=0;
      int n=  s.size();
       for(int i=0;i<n;i++){
           if(s[i]=='1')
              num+= pow(2,n-i-1);
       }
        return num;
    }
    int maxGoodNumber(vector<int>& nums) {
       int n=nums.size();
        unordered_map<int,string>mpp;
        for(int i=0;i<n;i++){
    string s="";
            int temp=nums[i];
            while(temp>0){
                if(temp%2==0)
                    s.push_back('0');
                else
                     s.push_back('1');
                temp/=2;
            }
            reverse(s.begin(),s.end());
            mpp[nums[i]]=s;
            
        }
        string ans="";
        int mx=0;
        for(int i=0;i<n;i++){
            ans+=mpp[nums[i]];
            }
        int num1=storii(ans);
        mx=max(mx,num1);
        ans="";
         for(int i=n-1;i>=0;i--){
            ans+=mpp[nums[i]];
            }
        int num2=storii(ans);
        mx=max(mx,num2);
        ans="";
        ans+=mpp[nums[0]];
        ans+=mpp[nums[2]];
        ans+=mpp[nums[1]];
        int num3=storii(ans);
        mx=max(mx,num3);
        ans="";
         ans+=mpp[nums[1]];
        ans+=mpp[nums[2]];
        ans+=mpp[nums[0]];
        int num4=storii(ans);
        mx=max(mx,num4);
        ans="";
         ans+=mpp[nums[1]];
        ans+=mpp[nums[0]];
        ans+=mpp[nums[2]];
        int num5=storii(ans);
        mx=max(mx,num5);
        ans="";
         ans+=mpp[nums[2]];
        ans+=mpp[nums[0]];
        ans+=mpp[nums[1]];
        int num6=storii(ans);
        mx=max(mx,num6);
        
        return mx;
    }
};