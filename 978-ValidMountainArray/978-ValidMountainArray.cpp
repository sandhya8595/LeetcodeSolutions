// Last updated: 03/08/2026, 21:35:12
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        if(n<3) return false;

         int i=0;
            // Increasing part
        while(i < n-1 && arr[i] < arr[i+1]) {
            i++;
        }
         if(i==0 || i == n-1) return false; //first and last should not b peak

         //decreaing
        while(i < n-1 && arr[i] > arr[i+1]) {
            i++;
        }
         return i == n-1;
    }
};