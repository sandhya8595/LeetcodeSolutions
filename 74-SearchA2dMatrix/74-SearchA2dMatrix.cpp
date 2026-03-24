// Last updated: 24/03/2026, 14:30:44
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size();//row and col element check krne ke liy
        int row_index,col_index, start = 0 ,end = m*n-1,mid;
        while(start<=end)
    {
        mid = start+(end-start)/2;
        row_index=mid / n; //direct ele ko search kr skt hai
        col_index=mid % n;
        if(matrix[row_index][col_index] == target)
        return 1;
        else if(matrix[row_index][col_index]<target)
           start =  mid+1;
           else 
           end = mid -1;  
    }
        return 0;
    }
};