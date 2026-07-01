// Last updated: 01/07/2026, 23:02:11
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    count += 4; // there is 4 cell
                    if (i > 0 && grid[i - 1][j] == 1) count -= 2; 
                    if (j > 0 && grid[i][j - 1] == 1) count -= 2; // current cell ke left wala cell agar land hai, to ...
                }
            }
        }
        return count;
    }
};
 // if (i > 0 && grid[i - 1][j] == 1) ans -= 2;  current cell ke upar wala cell agar land hai, to current cell aur upper cell ke beech ek common edge hai. Wo edge pehle current cell me 1 baar count hua, aur upper cell me bhi count hoga, isliye total 2 subtract karte hain.