class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j =0;j<n;j++){
                int rowmax = 0;
                int colmax = 0;
                for(int p = 0;p<n;p++){
                    rowmax = max(rowmax,grid[i][p]);
                }
                for(int p = 0;p<n;p++){
                    colmax = max(colmax,grid[p][j]);
                }
                ans =ans + min(rowmax,colmax)-grid[i][j];
            }
        }
        return ans;
        
    }
};