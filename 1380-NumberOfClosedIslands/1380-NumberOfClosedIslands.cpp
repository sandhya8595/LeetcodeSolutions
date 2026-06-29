// Last updated: 29/06/2026, 22:07:50
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        function<void(int,int)> dfs = [&](int r, int c) {
            if (r < 0 || r >= m || c < 0 || c >= n || grid[r][c] == 1) return;
            grid[r][c] = 1;
            dfs(r + 1, c); //up
            dfs(r - 1, c); //down
            dfs(r, c + 1);// left
            dfs(r, c - 1); //right
        };
       //row ke liye
        for (int i = 0; i < m; i++) {
            dfs(i, 0);
            dfs(i, n - 1);
        }

        for (int j = 0; j < n; j++) {
            dfs(0, j);
            dfs(m - 1, j);
        }

        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        return ans;
    }
};