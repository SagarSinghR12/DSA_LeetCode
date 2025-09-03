class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mpp;
        char space = ' ';
        mpp[space] = space;
        char start = 'a';
        for(char c : key){
            if(mpp.find(c) == mpp.end()){
                mpp[c] = start;
                start++;
            }
        }

        string ans = "";
        for(char c : message){
            ans += mpp[c];
        }

        return ans;
    }
};