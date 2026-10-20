class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long long start = 0;
        long long end = arr.size()-1;
        while (start <= end) {
            long long mid = end + (start - end) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            else if (arr[mid] < arr[mid - 1]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }
};