class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int[] res = new int[n];
        for(int i=0; i<n; i++){
            int target = nums1[i];
            int idx = -1;
            for(int j=0; j<nums2.length; j++){
                if(nums2[j] == target){
                    idx = j;
                    break;
                }
            }
            int nextGreater = -1;
            for(int j=idx+1; j<nums2.length; j++){
                if(nums2[j] > target){
                    nextGreater = nums2[j];
                    break;
                }
            }
            res[i] = nextGreater;
        }
        return res;
    }
}