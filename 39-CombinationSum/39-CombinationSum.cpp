// Last updated: 01/07/2026, 23:04:01
class Solution {
public:  
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> res;
         vector<int> comb;
        sort(candidates.begin(), candidates.end());          // optional but useful
        backtrack(candidates, target, 0, comb, res);
        return res;
    }

    void backtrack(const vector<int>& candidates, int target, int start,
        vector<int>& comb, vector<vector<int>>& res) {
         //basecondition
        if (target == 0) {
            res.push_back(comb);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > target) break;               // prune because sorted
            comb.push_back(candidates[i]);  
              backtrack(candidates, target - candidates[i], i, comb, res); // allow reuse
            comb.pop_back();                                 // backtrack
        }
    }
};  
   
    