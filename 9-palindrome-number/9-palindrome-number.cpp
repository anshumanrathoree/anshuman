class Solution {
public:
    bool isPalindrome(int x) {
        long long int t = x, s =0 ;
        if(x<0)
            return 0;
        while(t)
        {
                //t=t%10;
                s=s*10+t%10;
                t=t/10;
            
        }
        if(s==x)
            return true;
        else
            return false;
    }
};