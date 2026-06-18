// Last updated: 18/06/2026, 23:19:41
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

// using dfs

class Solution {
public:
    void solvePath(TreeNode* root, int targetSum, vector<int>& path,
                   vector<vector<int>>& result) {

        
    if (root == NULL) return ;
        path.push_back(root->val);

        if (root->left == NULL && root->right == NULL) {
            if (targetSum == root->val) {
                result.push_back(path);
            }
        }

        solvePath(root->left, targetSum - root->val, path, result);//LEFTSUBTREE RECURSION CALL
        solvePath(root->right, targetSum - root->val, path, result);

        path.pop_back(); // backtracking UPR JAYEGA THEN PHIR SE CHECK KREGA
    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;

        solvePath(root, targetSum, path, result);

        return result;
    }
};