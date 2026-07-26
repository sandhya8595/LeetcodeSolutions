// Last updated: 26/07/2026, 15:24:41
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> rem;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr1[j] == arr2[i]) {
                    ans.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        for(int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                rem.push_back(arr1[i]);
            }
        }
        sort(rem.begin(), rem.end());
        for (int x : rem) {
            ans.push_back(x);
        }

        return ans;
    }
};