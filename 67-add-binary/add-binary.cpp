class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0) {
            int bitA = (i >= 0) ? a[i] - '0' : 0;
            int bitB = (j >= 0) ? b[j] - '0' : 0;

            int sum = bitA + bitB + carry;
            int digit = sum % 2;
            carry = sum / 2;

            ans.push_back(digit + '0');

            i--;
            j--;
        }

        if (carry)
            ans.push_back('1');

        reverse(ans.begin(), ans.end());
        return ans;
    }
};