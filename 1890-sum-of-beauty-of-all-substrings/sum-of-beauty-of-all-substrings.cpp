class Solution {
public:
    int beautySum(string s) {
        int beautySum = 0;
        // unordered_map<char, int> mp;

        // Find all substrings
        for(int i=0; i<s.size(); i++){
            // mp.clear();
            int mp[256] = {0};       //256->ASCII chars, we'll store fre of 26 chars.
            for(int j=i; j<s.size(); j++){
                // char ch = s[j];
                char &ch = s[j];
                mp[ch]++;            //freq update

                int mini = INT_MAX;
                int maxi = INT_MIN;

                // for(auto i : mp){
                //     maxi = max(maxi, i.second);
                //     mini = min(mini, i.second);
                // }

                for(char ch = 'a'; ch <= 'z'; ch++){
                    if(mp[ch] > 0){
                        maxi = max(maxi, mp[ch]);
                        mini = min(mini, mp[ch]);
                    }
                }

                int beauty = maxi - mini;
                beautySum += beauty;
            }
        }
        return beautySum;
    }
};