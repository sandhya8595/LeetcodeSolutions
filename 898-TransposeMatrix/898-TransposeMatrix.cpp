// Last updated: 24/03/2026, 14:29:04
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        //when matrix is non - square
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int> > ans(col,vector<int> (row));
       for(int i=0;i<row;i++){
       for(int j= 0;j<col;j++){
          ans[j][i] = matrix[i][j];  
          //when matrix is square     
    //   for(int i =0;i<matrix.size()-1;i++){
    //     for(int j =i+1;j<matrix.size();j++)
    //         swap(matrix[i][j],matrix[j][i]);
    //     }
    }
       }
    return ans;
    }
};