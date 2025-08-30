class Solution {
public:
    // returns the first index where nums[idx] >= target
    int lowerBound(vector<int> &nums, int target){
        int start = 0;
        int end = nums.size();
        while(start < end){
            int mid = start + (end-start)/2;
            if(target > nums[mid])
                start = mid+1;
            else
                end = mid;
        }
        return start;
    }

    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // first index where nums[idx] >= 0
        int neg = lowerBound(nums, 0);

        // first index where nums[idx] >= 1
        int posIdx = lowerBound(nums, 1);
        int pos = n-posIdx;

        return max(neg, pos);
    }
};