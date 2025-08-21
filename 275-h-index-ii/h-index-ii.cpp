class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int start = 0;
        int end = n-1;
        while(start <= end){
            int mid = start + (end-start)/2;

            // number of papers with at least citations[mid] citations
            int papers = n - mid;

            if(citations[mid] >= papers){
                // possible answer, try to find smaller index
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return n-start;
    }
};