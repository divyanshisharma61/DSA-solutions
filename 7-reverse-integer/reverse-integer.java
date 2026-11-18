class Solution {
    public int reverse(int x) {

        int m;
        long sum = 0;
        while(x!=0){
            m = x%10;
            sum = sum*10 +m;
            x = x/10;
        }
        if(sum > Integer.MAX_VALUE || sum < Integer.MIN_VALUE) {
            return 0;
        }
        return (int)sum;
    }
}