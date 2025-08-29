class Solution {
public:
/*
    int pivotIndex(vector<int> &nums){
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end-start)/2;

            if(start == end)
                return start;
            
            if(mid+1 <= end  &&  nums[mid] > nums[mid+1])
                return mid;
            
            if(nums[start] > nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }

    int binarySearch(vector<int> &nums, int start, int end, int target){
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = pivotIndex(nums);
        int ans = 0;
        if(target >= nums[0] && target <= nums[pivot])
            ans = binarySearch(nums, 0, pivot, target);
        else
            ans = binarySearch(nums, pivot+1, nums.size()-1, target);
        
        return ans;
    }
    */

    int search(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size()-1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target)
                return mid;

            // search in Left
            if(nums[start]<=nums[mid]){
                if(target>=nums[start] && target<nums[mid])
                    end = mid-1;
                else
                    start = mid+1;
            }
            // Search in Right
            else{
                if(target>nums[mid] && target<=nums[end])
                    start = mid+1;
                else 
                    end = mid-1;
            }
        }

        return -1;
    }
};