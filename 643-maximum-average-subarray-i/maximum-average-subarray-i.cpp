class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k;
        int sum = 0;
        for(int y=i; y<j; y++)
            sum += nums[y];
        
        int maxSum = sum;
    
        while(j < nums.size()){
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max(sum, maxSum);
        }

        double average = maxSum/(double)k;

        return average;
    }
};