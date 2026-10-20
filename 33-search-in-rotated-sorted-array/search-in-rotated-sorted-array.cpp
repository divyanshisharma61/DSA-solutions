class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size()-1;
        int ans = nums[0];
        while(start<=end){
            int mid = start +(end -start)/2;
            if(nums[mid]==target){
                ans = mid;
                return ans;
            }

            else if(nums[mid]>=nums[0]){
                if(nums[start]<=target && nums[mid]>=target){
                    end = mid - 1;

                }
                else{
                    start = mid +1;
                }
            }

            else{
                if(nums[mid]<=target && target<=nums[end]){
                    start = mid +1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
        
    }
};