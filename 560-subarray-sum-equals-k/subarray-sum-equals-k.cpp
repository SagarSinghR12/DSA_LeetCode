class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> countSum;
        countSum[0] = 1;
        
        int prefixSum = 0;
        int count = 0;

        for(int i : nums){
            prefixSum += i;

            int need = prefixSum - k;

            if(countSum.count(need))
                count += countSum[need];
            
            countSum[prefixSum]++;
        }

        return count;
    }
};