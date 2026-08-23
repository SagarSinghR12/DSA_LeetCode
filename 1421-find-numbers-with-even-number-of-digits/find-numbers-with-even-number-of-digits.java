class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int num : nums) {
            if(isEven(num))
                count++;
        }
        return count;
    }

    public boolean isEven(int num) {
        int digits = 0;
        while(num > 0) {
            digits++;
            num /= 10;
        }
        return digits%2 == 0;
    }
}