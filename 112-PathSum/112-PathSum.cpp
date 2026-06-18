// Last updated: 18/06/2026, 22:40:51
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 //DFS(recursion)
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
     if(root==NULL) return 0;

     if(!root->left && !root->right) {
       return root->val==targetSum;
     }
       return hasPathSum(root->left,targetSum-root->val)||
       hasPathSum(root->right,targetSum-root->val);
     
    }
};