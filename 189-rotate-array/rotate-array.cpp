class Solution {
public:

    void method1(vector<int>& nums, int k){
        k = k % nums.size();
        
        // reverse all 
        reverse(nums.begin(), nums.end());

        // reverse first k elements
        reverse(nums.begin(), nums.begin()+k);

        // reverse last n-k elements
        reverse(nums.begin()+k, nums.end());
    }

    void method2(vector<int>& nums, int k){
        int n = nums.size();
        k = k%n;

        vector<int> temp(k);
        int index = 0;
        for(int i = n-k; i < n; i++){
            temp[index] = nums[i];
            index++;
        }

        for(int i = n-1; i >= k; i--){
            nums[i] = nums[i-k];
        }

        for(int i=0; i<k; i++){
            nums[i] = temp[i];
        }
    }

    void rotate(vector<int>& nums, int k) {
        method1(nums, k);
        // method2(nums, k);
    }
};