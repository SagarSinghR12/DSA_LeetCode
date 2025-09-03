class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        vector<int> prefix(n, 0);

        // build prefix sum of travel
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + travel[i-1];
        }

        int lastM = -1, lastP = -1, lastG = -1;
        int total = 0;

        // find last occurrences & count total garbage
        for(int i=0; i<n; i++){
            for(char c : garbage[i]){
                total++;
                if(c == 'M') lastM = i;
                if(c == 'P') lastP = i;
                if(c == 'G') lastG = i;
            }
        }

        if(lastM != -1) total += prefix[lastM];
        if(lastP != -1) total += prefix[lastP];
        if(lastG != -1) total += prefix[lastG];

        return total;
    }
};