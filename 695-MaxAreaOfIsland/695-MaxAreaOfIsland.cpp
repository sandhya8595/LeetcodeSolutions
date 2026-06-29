// Last updated: 29/06/2026, 13:23:16
class Solution {
public:
int dfs(vector<vector<int>>&grid,int i ,int j){
    int m = grid.size();
    int n = grid[0].size();

    if(i<0 || j<0 || i>=m || j>=n|| grid[i][j]==0){ return 0;
    }

       grid[i][j]=0;
        int area=1;

        area+=dfs(grid,i,j+1);
        area+=dfs(grid,i,j-1);
        area+=dfs(grid,i+1,j);
        area+=dfs(grid,i-1,j);
        
        return area;

    }



 int maxAreaOfIsland(vector<vector<int>>& grid) {

    if(grid.empty()) return 0;
    int m = grid.size();
    int n = grid[0].size();

      int  maxIsland=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              if(grid[i][j]==1){
        maxIsland=max(maxIsland,dfs(grid ,i,j)); /// ye call krega dfs ko
              }
            }
        }
    return maxIsland;
 }
};