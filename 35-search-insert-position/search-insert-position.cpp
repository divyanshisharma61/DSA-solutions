class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int start = 0;
        int last = nums.size()-1;
        int index = nums.size();

        while(start <= last){
            int mid = start + (last - start)/2;

            if(nums[mid] == target){
                index = mid;
                break;

            }

            else if (nums[mid]<target){
                start = mid +1;
            }

            else{
                index = mid;
                last = mid -1;


            }



        }
        return index;


    }
};