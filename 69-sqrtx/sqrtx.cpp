class Solution {
public:
    long long mySqrt(long long x) {
        long long start = 0;
        long long end = x;
        long long ans;
        while(start<=end){
            long long mid = start + (end - start)/2;

            if(mid * mid == x){
                ans = mid;
                break;
            }

            else if(mid * mid < x){
                ans =mid;
                start = mid +1;

            }
            else{
                end = mid -1;

            }
            
        }
        return ans;
        


        
    }
};