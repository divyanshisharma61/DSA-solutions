class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> presum(n, 0);
        vector<int> rem(k, 0);

        int count = 0;

        rem[0] = 1;

        presum[0] = nums[0];

        for(int i = 1; i < n; i++) {
            presum[i] = nums[i] + presum[i - 1];
        }

        for(int i = 0; i < n; i++) {

            int r = presum[i] % k;

            // Handle negative remainder
            if(r < 0) {
                r = r + k;
            }

            count = count + rem[r];

            rem[r]++;
        }

        return count;
    }
};