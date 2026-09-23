class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int rem;
        long long ans = 0;
        int temp = x;
        while(x!=0){
            rem = x % 10;
            x = x/10;
            ans = ans * 10 + rem;
            
        }

        if(temp == ans){
            return true;
        }
        else{
            return false;
        }


        
        
    }
};