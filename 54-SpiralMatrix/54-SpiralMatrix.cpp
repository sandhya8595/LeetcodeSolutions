// Last updated: 24/03/2026, 14:30:47
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row= matrix.size();//to print the row element
        int col=matrix[0].size();//to print the col elmnt
       int top=0,left=0,bottom=row-1,right=col-1;//j =row
       while(left<=right && top<=bottom){
        //to print top
        for(int j=left;j<=right;j++)
        ans.push_back(matrix[top][j]);
        top++;
        //to print right
        for(int i=top;i<=bottom;i++)
            ans.push_back(matrix[i][right]);
            right--;
        //to print bottom
        if(top<=bottom){
        for(int j=right;j>=left;j--)
            ans.push_back(matrix[bottom][j]);
            bottom--;
        }
        //to print left
        if(left<=right){
        for(int i=bottom;i>=top;i--)
            ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
    }
};  