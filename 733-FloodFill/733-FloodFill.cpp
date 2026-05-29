// Last updated: 29/05/2026, 22:46:54
class Solution {
public:
     void dfs(vector<vector<int>> &image, int i ,int j,int newColor,int origColor){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]==newColor || image[i][j]!=origColor ){
            return ;
        }
        image [i][j]=newColor;

        dfs(image,i-1,j,newColor,origColor);//top
        dfs(image,i,j+1,newColor,origColor);//right
        dfs(image,i+1,j,newColor,origColor);//bottom
        dfs(image,i,j-1,newColor,origColor);//left
     }
     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};