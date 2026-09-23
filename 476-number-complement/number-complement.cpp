class Solution {
public:
    int findComplement(int num) {
        int rem;
        long long ans = 0;
        long long mul = 1;

        while(num!=0){
            rem = num % 2;
            num = num/2;
            rem = rem ^ 1;
            ans = rem * mul + ans;
            mul = mul*2;

        }   return ans;


        
    }
};