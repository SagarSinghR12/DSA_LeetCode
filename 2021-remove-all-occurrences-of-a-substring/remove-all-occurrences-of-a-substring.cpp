class Solution {
public:

    string removeOccurrences_M(string s, string part) {
        string ans = "";
        int n = part.length();

        for (char c : s) {
            ans.push_back(c);  // add current character

            // check if ans ends with 'part'
            if (ans.size() >= n) {
                bool match = true;
                for (int i = 0; i < n; i++) {
                    if (ans[ans.size() - n + i] != part[i]) {
                        match = false;
                        break;
                    }
                }

                // if found, remove last n characters
                if (match) {
                    for (int i = 0; i < n; i++) {
                        ans.pop_back();
                    }
                }
            }
        }

        return ans;
    }

    string removeOccurrences(string s, string part) {
        // int pos = s.find(part);
        // while(pos != string::npos){
        //     s.erase(pos, part.length());
        //     pos = s.find(part);
        // }
        // return s;

        string ans = removeOccurrences_M(s, part);
        return ans;
    }
};