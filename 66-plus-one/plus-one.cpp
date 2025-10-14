class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> result(n+1, 0);
        int i = n-1;
        
        while(i >= 0){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i--] = 0;
        }
        
        result[0] = 1;
        return result;
    }
};