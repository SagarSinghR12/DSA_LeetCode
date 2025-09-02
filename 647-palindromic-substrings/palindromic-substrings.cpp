class Solution {
public:
    int expandAroundIndex(string s, int i, int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            // Odd string
            int oddCount = expandAroundIndex(s, i, i);
            // Even string
            int evenCount = expandAroundIndex(s, i, i+1);

            totalCount += oddCount + evenCount;
        }
        return totalCount;
    }
};