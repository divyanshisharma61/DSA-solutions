class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> ans;

        for (int i = 0; i <= rowIndex; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    row.push_back(1);
                } else {
                    int val = ans[i - 1][j] + ans[i - 1][j - 1];
                    row.push_back(val);
                }
            }
            ans.push_back(row);
        }
        return ans[rowIndex];
    }
};