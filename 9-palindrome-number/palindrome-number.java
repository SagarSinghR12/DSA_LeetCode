class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        int num = x;

        if(x < 0)
            return false;

        while(num != 0) {
            int rem = num % 10;
            rev = rev*10 + rem;
            num /= 10;
        }

        return rev==x;
    }
}