class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);

        // Step 1: Frequency count
        for (int num : nums) {
            if (num >= n) count[n]++;
            else count[num]++;
        }

        // Step 2: Traverse from high to low
        int greaterOrEqual = 0;
        for (int x = n; x >= 0; x--) {
            greaterOrEqual += count[x];
            if (greaterOrEqual == x) {
                return x;
            }
        }
        return -1;
    }
};