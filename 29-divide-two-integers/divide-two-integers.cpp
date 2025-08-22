class Solution {
public:
    int division(long long int dividend, long long int divisor){
        long long int start = 0;
        long long int end = dividend;
        long long int ans = 0;
        while(start <= end){
            long long int mid = start + (end-start)/2;
            long long int condition = mid * divisor;

            if(condition == dividend)
                return mid;
            else if(condition > dividend)
                end = mid - 1;
            else{
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }

    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        long long int dividendX = dividend;
        long long int divisorX = divisor;
        dividendX = (dividend < 0) ? -dividendX : dividendX;
        divisorX = (divisor < 0) ? -divisorX : divisorX;
        
        long long int ans = division(dividendX, divisorX);

        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0))
            ans = -ans;
        
        return ans;
    }
};