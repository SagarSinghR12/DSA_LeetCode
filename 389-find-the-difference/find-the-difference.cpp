class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26,0);
        for(char c : t)
            freq[c-'a']++;
        
        for(char c : s)
            freq[c-'a']--;

        for (int idx = 0; idx < 26; idx++) {
            if (freq[idx] != 0)
                return idx + 'a';
        }

        return ' ';
    }
};