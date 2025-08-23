class Solution {
public:
    bool canKokoFinish(vector<int> &piles, int h, int k){
        long long int totalHours = 0;
        for(int i : piles){
            // Integer division is faster than ceil operation 
            totalHours += (i+k-1)/k;
            // If the totHrs has crossed h, then there is no need to go further
            if(totalHours > h)
                return false;
        }
            
        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = 0;

        while(start <= end){
            int mid = start + (end-start)/2;
            int k = mid;
            if(canKokoFinish(piles, h, k)){
                ans = k;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return ans;
    }
};