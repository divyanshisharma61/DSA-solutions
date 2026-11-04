
class Solution {
public:
    multiset<int> left, right;
    long long sumLeft = 0, sumRight = 0;

    void balance() {
        while (left.size() > right.size() + 1) {
            int val = *left.rbegin();
            left.erase(left.find(val));
            sumLeft -= val;

            right.insert(val);
            sumRight += val;
        }

        while (left.size() < right.size()) {
            int val = *right.begin();
            right.erase(right.find(val));
            sumRight -= val;

            left.insert(val);
            sumLeft += val;
        }
    }

    void add(int val) {
        if (left.empty() || val <= *left.rbegin()) {
            left.insert(val);
            sumLeft += val;
        } else {
            right.insert(val);
            sumRight += val;
        }

        balance();
    }

    void remove(int val) {
        auto it = left.find(val);

        if (it != left.end()) {
            left.erase(it);
            sumLeft -= val;
        } else {
            it = right.find(val);
            right.erase(it);
            sumRight -= val;
        }

        balance();
    }

    long long getCost() {
        long long median = *left.rbegin();

        return median * left.size() - sumLeft
             + sumRight - median * right.size();
    }

    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        vector<long long> cost(n - x + 1);

        // Step 1: Sliding window costs
        for (int i = 0; i < x; i++)
            add(nums[i]);

        cost[0] = getCost();

        for (int i = x; i < n; i++) {
            remove(nums[i - x]);
            add(nums[i]);

            cost[i - x + 1] = getCost();
        }

        // Step 2: DP
        const long long INF = 1e18;

        vector<vector<long long>> dp(
            k + 1, vector<long long>(n + 1, INF)
        );

        dp[0][0] = 0;

        for (int t = 0; t <= k; t++) {
            for (int i = 0; i <= n; i++) {

                if (dp[t][i] == INF)
                    continue;

                // Skip current position
                if (i < n)
                    dp[t][i + 1] = min(
                        dp[t][i + 1], dp[t][i]
                    );

                // Select window
                if (t < k && i + x <= n) {
                    dp[t + 1][i + x] = min(
                        dp[t + 1][i + x],
                        dp[t][i] + cost[i]
                    );
                }
            }
        }

        return dp[k][n];
    }
};
