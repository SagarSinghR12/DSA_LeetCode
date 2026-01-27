class Solution {
    public int prefixSumApproch1(int[] nums){
        int n = nums.length;
        int leftSum[] = new int[n];
        int rightSum[] = new int[n];

        for(int i=1; i<n; i++)
            leftSum[i] = leftSum[i-1] + nums[i-1];

        for(int i=n-2; i>=0; i--)
            rightSum[i] = rightSum[i+1] + nums[i+1];
        
        for(int i=0; i<n; i++)
            if(leftSum[i] == rightSum[i])
                return i;

        return -1;
    }

    public int prefixSumApproch2(int[] nums){
        int n = nums.length;
        int totalSum = 0;
        for(int num : nums)
            totalSum += num;

        int leftSum = 0;
        for(int i=0; i<n; i++){
            int rightSum = totalSum - leftSum - nums[i];

            if(rightSum == leftSum)
                return i;
            
            leftSum += nums[i];
        }
        
        return -1;
    }

    public int pivotIndex(int[] nums) {
        // return prefixSumApproch1(nums);
        return prefixSumApproch2(nums);
    }
}