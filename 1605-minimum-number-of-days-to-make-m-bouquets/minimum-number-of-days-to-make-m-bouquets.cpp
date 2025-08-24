class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day){
        int flowers = 0;
        int bouquets = 0;
        for(int i : bloomDay){
            if(i <= day){
                flowers++;
                if(flowers == k){
                    bouquets++;
                    flowers = 0;
                    if(bouquets == m)
                        break;
                }
            }
            else
                flowers = 0;
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int requirement = (long long int)m*k;
        if(requirement > bloomDay.size())
            return -1;

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = 0;

        while(start <= end){
            int mid = start + (end-start)/2;
            int day = mid;
            if(canMake(bloomDay, m,  k, day)){
                ans = mid;
                end = mid-1;
            }
            else 
                start = mid + 1;
        }
        return ans;
    }
};