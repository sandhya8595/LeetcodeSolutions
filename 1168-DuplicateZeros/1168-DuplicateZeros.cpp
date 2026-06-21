// Last updated: 21/06/2026, 17:31:52
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
         queue<int>q;

        for(int i =0;i<n;i++){
            q.push(arr[i]);
            if(arr[i]==0){ //agr value zero ke eu hai to usko q me push krenge
                q.push(0);
            }
        }
         for(int i =0;i<n;i++){
                arr[i]=q.front();
                q.pop();
            }
    }
};