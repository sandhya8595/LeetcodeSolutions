// Last updated: 24/03/2026, 14:28:46
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n,0);

         if(k == 0) return result;

          for(int i = 0; i < n; i++){
           int sum = 0;

            if(k > 0){
                for(int j = 1; j <= k; j++){
                    sum += code[(i + j) % n];//i + j = 4 nd size 3 index tk ka ho But index 4 does not exist, so it would cause an out-of-bounds error.isliye hm module use krenge
                }
            }
            else{
                for(int j = 1; j <= abs(k); j++){
                    sum += code[(i - j + n) % n];
                }
            }
            result[i] = sum;
     }

        return result;
     
    }
};