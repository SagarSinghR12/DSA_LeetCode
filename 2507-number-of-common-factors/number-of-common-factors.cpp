class Solution {
public:
    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

    int commonFactors(int a, int b) {
        // multiples of hcf are the common multiples of a & b.
        int hcf = gcd(a,b);
        int count = 0;
        for(int i=1; i<=hcf; i++){
            if(hcf%i == 0)
                count++;
        }
        return count;
    }
};