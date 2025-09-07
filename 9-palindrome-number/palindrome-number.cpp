class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        int num = x;
        int rev=0;
        while(num){
            int digit = num%10;
            if(rev >= INT_MAX/10  ||  rev <= INT_MIN/10)
                return 0;
            rev = rev*10 + digit;
            num /= 10;
        }
        return x == rev;
    }
};