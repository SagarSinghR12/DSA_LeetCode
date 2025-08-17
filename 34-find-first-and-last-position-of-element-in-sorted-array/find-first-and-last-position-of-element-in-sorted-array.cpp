class Solution {
public:
    int firstOccurence(vector<int> &nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return ans;
    }

    int lastOccurence(vector<int> &nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                ans = mid;
                start = mid+1;
            }
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};