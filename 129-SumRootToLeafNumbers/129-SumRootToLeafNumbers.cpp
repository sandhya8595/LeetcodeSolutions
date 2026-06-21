// Last updated: 21/06/2026, 17:33:22
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
class Solution {
public:
int solve(TreeNode* root, int num) {
   if(root==NULL)  return 0;
         num = num*10+root->val;   //1*10+2=12

       if(!root->left && !root->right) return num;

     return solve(root->left, num) +
            solve(root->right, num);
    }
    int sumNumbers(TreeNode* root) {
         return solve(root, 0);

    }
};