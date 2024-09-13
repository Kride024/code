class Solution {
public:
    bool isPalindrome(int x) {
        int dub=x;
        long rev=0;
        while(dub>0){
            rev=rev*10+dub%10;
            dub=dub/10;
        }
        (int)rev;
        if(x==rev)
            return 1;
        else
            return 0;
        
    }
};