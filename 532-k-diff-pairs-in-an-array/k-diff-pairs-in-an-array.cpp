class Solution {
public:
    bool binarySearch(vector<int> &nums, int start, int x){
        int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid]==x)
                return true;
            else if(nums[mid]>x)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }

    int findPairs(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());
        // set <pair<int,int>> ans;
        // int i=0;
        // int j=1;
        // while(j < nums.size()){
        //     int diff = nums[j]-nums[i];
        //     if(diff == k){
        //         ans.insert({nums[i], nums[j]});
        //         i++, j++;
        //     }
        //     else if(diff > k)
        //         i++;
        //     else
        //         j++;

        //     if(i == j)
        //         j++;
        // }
        // return ans.size();

        sort(nums.begin(), nums.end());
        set <pair<int,int>> ans;
        for(int i=0; i<nums.size(); i++){
            if(binarySearch(nums, i+1, nums[i]+k))
                ans.insert({nums[i], nums[i]+k});
        }
        return ans.size();
    }
};