class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        string s;

        if(a+b<=c || b+c<=a || c+a<=b)
            return "none";

        if(a==b && b==c)
            s = "equilateral";
        else if(a==b || b==c || c==a)
            s = "isosceles";
        else
            s = "scalene";

        return s;
    }
};