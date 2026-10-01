class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int idx = 0;
         for(int i = 0;i<nums.size();i++){
            if(nums[i]>nums[idx])
            idx = i;
        }

        for(int i = 0;i<nums.size();i++){
            if(nums[idx]<nums[i]*2 &&(idx !=i))
            return -1;
        }

        return idx;
        
    }
};