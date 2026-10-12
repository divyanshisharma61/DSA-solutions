class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        long long start = 0;
        long long last = arr.size()-1;

        while(start<=last){
            long long mid = last + (start-last)/2;

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }

            else if(arr[mid]>arr[mid-1]){
                start = mid+1;
            }
            else{
                last = mid-1;
            }

            
        }return -1;

    }
};