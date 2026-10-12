class Solution {
public:
    int findMin(vector<int>& nums) {

        int start = 0;
        int last = nums.size()-1;
        int ans = nums[0];

        while(start<=last){
            int mid = start +(last-start)/2;

            if(nums[mid]>=nums[0]){
                start = mid + 1;

            }
            else{
                ans = nums[mid];
                last = mid-1;
            }
        }
        return ans;



        
    }
};