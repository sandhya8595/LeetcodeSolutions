// Last updated: 24/03/2026, 14:30:28
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
  int height(TreeNode *root,bool &valid){
      //base condition
      if(!root)
        return 0;
        
       int l= height(root->left,valid);
       int r= height(root->right,valid);
       //to check balance or not
        if(abs(l-r)>1)
        valid=0;
        return 1+max(l,r);
  } 
    bool isBalanced(TreeNode* root) {
       bool valid=1;
       height(root,valid);
       return valid;
    }
};