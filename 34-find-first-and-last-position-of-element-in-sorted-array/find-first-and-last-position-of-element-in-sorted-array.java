class Solution {
    public static int firstIndex(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return ans;
    }

    public static int lastIndex(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return ans;
    }

    public int[] searchRange(int[] nums, int target) {
        int idx1 = firstIndex(nums, target);
        int idx2 = lastIndex(nums, target);
        return new int[] {idx1, idx2};
    }
}