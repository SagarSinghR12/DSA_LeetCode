class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i : nums){
            int countDigits = log10(i)+1;
            
            if((countDigits & 1) == 0)
                count++;
        }
        return count;
    }
};