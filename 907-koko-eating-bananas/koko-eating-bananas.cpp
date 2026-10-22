class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = 0;
        for(int x:piles){
            high = high +x;

        }

        while(low<=high){
            long long mid = low +(high-low)/2;
            if(isvalid(piles,h,mid)){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }

    bool isvalid(vector<int>& piles,int h,int speed){
        int noofhour = 0;
        for(int x:piles){
            if(x%speed==0){
                noofhour = noofhour + x/speed;
            }

            else{
                noofhour = noofhour + (x/speed) + 1;
            }

        }return noofhour<=h;
    }









};