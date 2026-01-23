class Solution {
    public int longestOnes(int[] nums, int k) {
        int left = 0;
        int zeroesCount = 0;
        int maxLen = 0;
        for(int right=0; right<nums.length; right++){
            if(nums[right] == 0){
                zeroesCount++;
            }
            while(zeroesCount > k){
                if(nums[left] == 0){
                    zeroesCount--;
                }
                left++;
            }
            maxLen = Math.max(maxLen, right - left + 1);
        }
        return maxLen;
    }
}