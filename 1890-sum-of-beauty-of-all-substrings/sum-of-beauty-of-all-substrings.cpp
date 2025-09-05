class Solution {
public:
    int beautySum(string s) {
        int beautySum = 0;
        unordered_map<char, int> mp;

        // Find all substrings
        for(int i=0; i<s.size(); i++){
            mp.clear();
            for(int j=i; j<s.size(); j++){
                // char ch = s[j];
                char &ch = s[j];
                mp[ch]++;            //freq update

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto i : mp){
                    maxi = max(maxi, i.second);
                    mini = min(mini, i.second);
                }

                int beauty = maxi - mini;
                beautySum += beauty;
            }
        }
        return beautySum;
    }
};