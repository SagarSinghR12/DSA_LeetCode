class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length <=2)
            return nums.length;

        int i = 1;
        int j = 1; 
        int count = 1;
        
        while(j < nums.length){
            if(nums[j] == nums[j-1])
                count++;
            else
                count = 1;
            
            if(count <=2)
                nums[i++] = nums[j];

            j++;
        }

        return i;
    }
}