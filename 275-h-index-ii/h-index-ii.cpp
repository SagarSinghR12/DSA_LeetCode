class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        vector<int> count(n+1, 0);

        // Populate the count array:
        for(int i : citations){
            if(i >= n)
                count[n]++;
            else
                count[i]++;
        }

        // Calculate the H-Index:
        int total = 0;
        for(int i=n; i>=0; i--){
            total += count[i];
            if(total >= i)
                return i;
        }

        return 0;
    
    }
};