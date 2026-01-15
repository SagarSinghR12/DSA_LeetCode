class Solution {
    public int[] shuffle(int[] nums, int n) {
        // ArrayList<Integer> arr = new ArrayList<>();
        int[] res = new int[nums.length];
        int idx = 0;
         for(int i=0; i<n; i++){
            res[idx++] = nums[i];
            res[idx++] = nums[i+n];
         }

         return res;
    }
}