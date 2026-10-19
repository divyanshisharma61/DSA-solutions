class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size(),m = grid[0].size();
        int i = 0,j = 0;
        int p = 0, q = 0;
        while(i>=0 && i<n && j>=0 && j<m){
            if(grid[i][j]=='#'){
                return {p,q};
            }
            if(grid[i][j]=='R'){
                p = i;q = j;
                j++;
            }
            else if(grid[i][j]=='L'){
                p = i;q = j;
                j--;
            }
            else if(grid[i][j]=='U'){
                p = i;q = j;
                i--;
            }
            else if(grid[i][j]=='D'){
                p = i;q = j;
                i++;
            }

            grid[p][q] = '#';
        }
        return {p,q};
    }
};