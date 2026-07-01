// Last updated: 02/07/2026, 02:32:32
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();

      vector<vector<int>> vis(n,vector<int>(m,0));//we ctred vis matrix that contains each cell 0 
      vector<vector<int>> dist(n,vector<int>(m,0)); 
    queue<pair<pair<int,int>,int>>q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==0){
                q.push({{i,j},0}); //row and col index ,step
                vis[i][j]=1;
            }
            else{
                    vis[i][j]=0;
            }

        }
      }

      int drow[]={-1,0,1,0};
      int dcol[]={0,+1,0,-1};
      while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
       dist[row][col]=steps;

   for(int i =0;i<4;i++){
    int newrow=row+drow[i];
    int newcol=col+dcol[i];

    if(newrow >=0 && newrow<n && newcol >=0 && newcol<m && vis[newrow][newcol]==0){
        vis[newrow][newcol]=1;
        q.push({{newrow,newcol},steps+1});
    }
   }
      }
      return dist;
    }
};