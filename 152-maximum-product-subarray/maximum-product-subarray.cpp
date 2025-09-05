class Solution {
public:
    int prefixSuffixApproch(vector<int>& nums){
        int pre = 1, suff = 1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(pre == 0)
                pre = 1;
            if(suff == 0)
                suff = 1;
            
            pre *= nums[i];
            suff *= nums[n-i-1];

            ans = max(ans, max(pre, suff));
        }
        return ans;
    }

    int kadaneAlgoApproch(vector<int>& nums){
        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int curr = nums[i];

            int tempMax = maxProd;

            maxProd = max({curr, curr * maxProd, curr * minProd});
            minProd = min({curr, curr * tempMax, curr * minProd});

            result = max(result, maxProd);
        }

        return result;
    }

    int maxProduct(vector<int>& nums) {
        
        // return prefixSuffixApproch(nums);
        return kadaneAlgoApproch(nums);
    }
};