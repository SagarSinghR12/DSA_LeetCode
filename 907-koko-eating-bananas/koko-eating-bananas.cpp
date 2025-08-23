class Solution {
public:
    bool canKokoFinish(vector<int> &piles, int h, int k){
        long long int totalHours = 0;
        for(int i : piles)
            totalHours += ceil(i/(double)k);
        
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