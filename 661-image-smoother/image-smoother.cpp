class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int n = img.size();
        int m = img[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                int count = 0;
                for (int p = i - 1; p <= i + 1; p++) {
                    for (int q = j - 1; q <= j + 1; q++) {
                        if (p >= 0 && q >= 0 && p < n && q < m) {
                            sum += img[p][q];
                            count++;
                        }
                    }
                }
                int avg = sum / count;
                ans[i][j] = avg;
            }
        }

        return ans;
    }
};