class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x, rev = 0;
        if(x<0)
            return 0;
        while(temp){
            rev = rev*10 + temp%10;
            temp/=10;
        }
        return x == rev;
    }
};