class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int x:nums){
            sum += x;
        }
        int total_sum = n*(n+1)/2;
        return total_sum - sum;
        
    }
};