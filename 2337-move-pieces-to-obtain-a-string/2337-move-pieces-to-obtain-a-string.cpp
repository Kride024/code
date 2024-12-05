class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.size();
        int m=target.size();
        if(n!=m)
            return false;
        int i=0;
        int j=0;
        while(i<n||j<n){
            while(target[j]=='_')
                j++;
            while(start[i]=='_')
                i++;
            if(i==n||j==n)
                return i==n&&j==n;
          
             if(start[i]!=target[j]||start[i]=='L'&&i<j||start[i]=='R'&&i>j)
                return false;
        
        i++;
                 j++;
        }
        return true;
        
    }
};